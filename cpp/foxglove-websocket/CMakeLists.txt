cmake_minimum_required(VERSION 3.15)
project(FoxgloveWebSocket CXX)

add_definitions("-Wall -g")
set(CMAKE_TOOLCHAIN_FILE /home/huang/Documents/android-ndk-r21e/build/cmake/android.toolchain.cmake)
set(CMAKE_SYSTEM_NAME Android)
set(CMAKE_SYSTEM_VERSION 21) 
set(CMAKE_ANDROID_NDK /home/huang/Documents/android-ndk-r21e) # 设置NDK路径
set(CMAKE_ANDROID_STL_TYPE c++_shared)    # 使用LLVM STL
set(CMAKE_ANDROID_ARCH_ABI arm64-v8a)    # 根据需求修改ABI
set(CMAKE_PREFIX_PATH "/home/huang/third_party_x86" ${CMAKE_PREFIX_PATH})
set(ANDROID_PLATFORM android-21)
set(CMAKE_CXX_STANDARD 17)


# 设置编译器
set(CMAKE_C_COMPILER ${CMAKE_ANDROID_NDK}/toolchains/llvm/prebuilt/linux-x86_64/bin/aarch64-linux-android21-clang)
set(CMAKE_CXX_COMPILER ${CMAKE_ANDROID_NDK}/toolchains/llvm/prebuilt/linux-x86_64/bin/aarch64-linux-android21-clang++)

# 设置工具链路径
set(ANDROID_TOOLCHAIN ${CMAKE_ANDROID_NDK}/toolchains/llvm/prebuilt/linux-x86_64)
set(CMAKE_SYSROOT ${ANDROID_TOOLCHAIN}/sysroot)

# # 添加交叉编译路径限制
set(CMAKE_FIND_ROOT_PATH "${CMAKE_CURRENT_SOURCE_DIR}/third-party/android_install")
set(CMAKE_FIND_ROOT_PATH_MODE_PACKAGE ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY ONLY)

# find_package(nlohmann_json REQUIRED)

# 修改 ZLIB 查找方式
set(ZLIB_INCLUDE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/third-party/android_install/include")
set(ZLIB_LIBRARY "${CMAKE_CURRENT_SOURCE_DIR}/third-party/android_install/lib/libz.a")

find_package(ZLIB REQUIRED)
if(ZLIB_FOUND)
  message(STATUS "Found ZLIB include: ${ZLIB_INCLUDE_DIRS}")
  message(STATUS "Found ZLIB library: ${ZLIB_LIBRARIES}")
else()
  message(FATAL_ERROR "ZLIB not found in Android third-party directory")
endif()

# 修改 Protobuf 库路径直接指定静态库
set(Protobuf_LIBRARIES 
    "${CMAKE_CURRENT_SOURCE_DIR}/third-party/android_install/lib/libprotobuf.a"
)


set(OpenSSL_ROOT_DIR "${CMAKE_CURRENT_SOURCE_DIR}/third-party/android_install")

find_package(OpenSSL REQUIRED COMPONENTS SSL Crypto)


find_package(Boost REQUIRED COMPONENTS system) # 添加 Boost 依赖查找

set(WEBSOCKETPP_INCLUDE_DIRS "${CMAKE_CURRENT_SOURCE_DIR}/third-party/android_install/include/websocketpp")

# find_package(websocketpp REQUIRED 
#     PATHS "${CMAKE_CURRENT_SOURCE_DIR}/third-party/android_install"
#     NO_DEFAULT_PATH
# )


add_executable(example_server_protobuf src/base64.cpp src/parameter.cpp src/serialization.cpp src/server_factory.cpp src/example_server_protobuf.cpp
# ${SRC_PB}
src/foxglove/ArrowPrimitive.pb.cc
src/foxglove/CameraCalibration.pb.cc
src/foxglove/CircleAnnotation.pb.cc
src/foxglove/Color.pb.cc
src/foxglove/CompressedImage.pb.cc
src/foxglove/CompressedVideo.pb.cc
src/foxglove/CubePrimitive.pb.cc
src/foxglove/CylinderPrimitive.pb.cc
src/foxglove/FrameTransform.pb.cc
src/foxglove/FrameTransforms.pb.cc
src/foxglove/GeoJSON.pb.cc
src/foxglove/Grid.pb.cc
src/foxglove/ImageAnnotations.pb.cc
src/foxglove/KeyValuePair.pb.cc
src/foxglove/LaserScan.pb.cc
src/foxglove/LinePrimitive.pb.cc
src/foxglove/LocationFix.pb.cc
src/foxglove/Log.pb.cc
src/foxglove/ModelPrimitive.pb.cc
src/foxglove/PackedElementField.pb.cc
src/foxglove/Point2.pb.cc
src/foxglove/Point3.pb.cc
src/foxglove/PointCloud.pb.cc
src/foxglove/PointsAnnotation.pb.cc
src/foxglove/PoseInFrame.pb.cc
src/foxglove/Pose.pb.cc
src/foxglove/PosesInFrame.pb.cc
src/foxglove/Quaternion.pb.cc
src/foxglove/RawImage.pb.cc
src/foxglove/SceneEntityDeletion.pb.cc
src/foxglove/SceneEntity.pb.cc
src/foxglove/SceneUpdate.pb.cc
src/foxglove/SpherePrimitive.pb.cc
src/foxglove/TextAnnotation.pb.cc
src/foxglove/TextPrimitive.pb.cc
src/foxglove/TriangleListPrimitive.pb.cc
src/foxglove/Vector2.pb.cc
src/foxglove/Vector3.pb.cc
)

set(ANDROID_INSTALL_INCLUDE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/third-party/android_install/include")
target_include_directories(example_server_protobuf
    PUBLIC include
    # SYSTEM
    # ${nlohmann_json_INCLUDE_DIRS}
    # ${websocketpp_INCLUDE_DIRS}
    src
    ${WEBSOCKETPP_INCLUDE_DIRS}
    ${ANDROID_INSTALL_INCLUDE_DIR}
    # ${CMAKE_CURRENT_SOURCE_DIR}/third-party/android_install/include
    # ZLIB_INCLUDE_DIR
)


target_link_libraries(example_server_protobuf 
# nlohmann_json::nlohmann_json 
# websocketpp::websocketpp
ZLIB::ZLIB 
${Protobuf_LIBRARIES}  # 这里现在直接指向静态库文件
Boost::system  # 添加 Boost 头文件
# Boost::system  # 添加 Boost 系统库
OpenSSL::SSL  # 添加 OpenSSL 库
OpenSSL::Crypto 
log  # 添加 Android 日志库
)
# set_target_properties(example_server_protobuf PROPERTIES CXX_STANDARD 17 CXX_STANDARD_REQUIRED ON)


# 打印 example_server_protobuf 目标的 include 路径
get_target_property(dirs example_server_protobuf INCLUDE_DIRECTORIES)
message(STATUS "Include directories for example_server_protobuf: ${dirs}")