#!/bin/bash
set -e  # Exit immediately if any command fails
NDK=/home/huang/Documents/android-ndk-r21e
TOOLCHAIN=$NDK/toolchains/llvm/prebuilt/linux-x86_64
API=21

# Add NDK home export
export ANDROID_NDK_HOME=$NDK
export PATH=$TOOLCHAIN/bin:$PATH

./Configure android-arm64 \
--prefix=${PWD}/../android_install \
--openssldir=${PWD}/../android_install/ssl \
-I$TOOLCHAIN/sysroot/usr/include \
-I${PWD}/../android_install/include \
-L${PWD}/../android_install/lib \
zlib \
-D__ANDROID_API__=$API \
no-shared \
no-ssl3

make -j$(nproc)
make installbba