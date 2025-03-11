#!/bin/bash
set -e
NDK=/home/huang/Documents/android-ndk-r21e
TOOLCHAIN=$NDK/toolchains/llvm/prebuilt/linux-x86_64
TARGET=aarch64-linux-android
API=21

echo "▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄"
echo "  BOOST ANDROID BUILDER  "
echo "▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀"

# 清理旧配置
rm -rf bin.v2/* project-config.jam* tools/build/src/user-config.jam

export HOST_CXX=$TOOLCHAIN/bin/clang++

# 生成工具链配置
cat > tools/build/src/user-config.jam << EOF
using clang : android
: "$TOOLCHAIN/bin/${TARGET}${API}-clang++"
: <archiver>$TOOLCHAIN/bin/llvm-ar
  <ranlib>$TOOLCHAIN/bin/llvm-ranlib
  <compileflags>-fPIC
  <compileflags>-DANDROID
  <compileflags>--target=$TARGET$API
  <compileflags>--sysroot=$TOOLCHAIN/sysroot
;
EOF

echo "✅ 工具链配置生成完成"

# 初始化构建系统
echo "⏳ 初始化构建系统..."
CFLAGS="-target x86_64-linux-gnu" \
CXXFLAGS="-target x86_64-linux-gnu" \
LDFLAGS="-target x86_64-linux-gnu" \
./bootstrap.sh --prefix=../android_install \
--with-toolset=gcc \
--with-bjam=$HOST_CXX

# 主编译命令
echo "🚀 开始编译 Boost 库..."
export PATH=$TOOLCHAIN/bin:$PATH
./b2 install \
    -j$(nproc) \
    --user-config=tools/build/src/user-config.jam \
    toolset=clang-android \
    target-os=android \
    variant=release \
    link=static \
    runtime-link=shared \
    threading=multi \
    architecture=arm \
    address-model=64 \
    --with-system \
    --with-filesystem \
    --with-thread \
    --with-chrono \
    --with-regex

echo "🎉 Boost 交叉编译完成！"
echo "安装路径: ../android_install"