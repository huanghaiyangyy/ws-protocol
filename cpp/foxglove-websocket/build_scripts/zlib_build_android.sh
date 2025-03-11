#!/bin/bash
NDK=/home/huang/Documents/android-ndk-r21e
TOOLCHAIN=$NDK/toolchains/llvm/prebuilt/linux-x86_64
TARGET=aarch64-linux-android
API=21

export CC=$TOOLCHAIN/bin/$TARGET$API-clang
export AR=$TOOLCHAIN/bin/llvm-ar
export RANLIB=$TOOLCHAIN/bin/llvm-ranlib

CFLAGS="-fPIC" ./configure \
--prefix=${PWD}/../android_install \
--static

make -j$(nproc)
make install