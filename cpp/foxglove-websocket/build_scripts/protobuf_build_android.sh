#!/bin/bash
NDK=/home/huang/Documents/android-ndk-r21e
TOOLCHAIN=$NDK/toolchains/llvm/prebuilt/linux-x86_64
SYSROOT=$NDK/platforms/android-21/arch-arm64
TARGET=aarch64-linux-android
API=21

export PATH=$TOOLCHAIN/bin:$PATH

./autogen.sh
./configure \
--prefix=${PWD}/../android_install \
--host=$TARGET \
--with-sysroot=$SYSROOT \
--with-protoc=/usr/local/bin/protoc \
--with-zlib=${PWD}/../android_install \
--disable-shared \
--enable-static \
CFLAGS="-fPIE -fPIC" \
CXXFLAGS="-frtti -fexceptions -std=c++17" \
CC=$TOOLCHAIN/bin/$TARGET$API-clang \
CXX=$TOOLCHAIN/bin/$TARGET$API-clang++

make -j$(nproc)
make install