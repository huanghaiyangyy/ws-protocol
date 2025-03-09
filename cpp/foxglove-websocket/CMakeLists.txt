cmake_minimum_required(VERSION 3.15)
project(FoxgloveWebSocket CXX)

find_package(nlohmann_json REQUIRED)
find_package(websocketpp REQUIRED)
find_package(Protobuf REQUIRED)
find_package(ZLIB REQUIRED)
find_package(Boost REQUIRED COMPONENTS system) # 添加 Boost 依赖查找
find_package(OpenSSL REQUIRED) # 添加 OpenSSL 依赖查找

add_library(foxglove_websocket src/base64.cpp src/parameter.cpp src/serialization.cpp src/server_factory.cpp)


# file(GLOB SRC_PB src/foxglove/*.cc)

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

target_include_directories(example_server_protobuf
    PUBLIC include
    SYSTEM
    ${nlohmann_json_INCLUDE_DIRS}
    ${websocketpp_INCLUDE_DIRS}
    src
)
target_link_libraries(example_server_protobuf 
nlohmann_json::nlohmann_json 
websocketpp::websocketpp
ZLIB::ZLIB 
${Protobuf_LIBRARIES}
Boost::boost  # 添加 Boost 头文件
Boost::system  # 添加 Boost 系统库
OpenSSL::SSL  # 添加 OpenSSL 库
)
set_target_properties(example_server_protobuf PROPERTIES CXX_STANDARD 17 CXX_STANDARD_REQUIRED ON)

target_include_directories(foxglove_websocket
    PUBLIC include
    SYSTEM
    ${nlohmann_json_INCLUDE_DIRS}
    ${websocketpp_INCLUDE_DIRS}
)
target_link_libraries(foxglove_websocket nlohmann_json::nlohmann_json websocketpp::websocketpp)
set_target_properties(foxglove_websocket PROPERTIES CXX_STANDARD 17 CXX_STANDARD_REQUIRED ON)

if (MSVC)
  target_compile_options(foxglove_websocket PRIVATE /W4)
else()
  target_compile_options(foxglove_websocket PRIVATE -Wall -Wextra -Wpedantic -Wold-style-cast -Wfloat-equal)
endif()

install(TARGETS foxglove_websocket)
INSTALL (DIRECTORY ${CMAKE_SOURCE_DIR}/include/
         DESTINATION include)
install(FILES ${CMAKE_SOURCE_DIR}/LICENSE DESTINATION ${CMAKE_INSTALL_PREFIX}/licenses/)
