set(CMAKE_SYSTEM_NAME Android)
set(CMAKE_SYSTEM_VERSION 21)
set(CMAKE_ANDROID_NDK /home/huang/Documents/android-ndk-r21e)
set(CMAKE_ANDROID_ARCH_ABI arm64-v8a)
set(CMAKE_ANDROID_STL_TYPE c++_shared)

# 设置编译器
set(CMAKE_C_COMPILER ${CMAKE_ANDROID_NDK}/toolchains/llvm/prebuilt/linux-x86_64/bin/aarch64-linux-android21-clang)
set(CMAKE_CXX_COMPILER ${CMAKE_ANDROID_NDK}/toolchains/llvm/prebuilt/linux-x86_64/bin/aarch64-linux-android21-clang++)

# 设置工具链路径
set(ANDROID_TOOLCHAIN ${CMAKE_ANDROID_NDK}/toolchains/llvm/prebuilt/linux-x86_64)
set(CMAKE_FIND_ROOT_PATH ${ANDROID_TOOLCHAIN}/sysroot)

# 设置查找路径模式
set(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER)
set(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_PACKAGE ONLY)