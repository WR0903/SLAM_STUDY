cmake_minimum_required(VERSION 2.8)     #声明要求的camke最低版本
project(cloudSlam)                      #声明一cmake工程
set( CMAKE_BUILD_TYPE Release )
set( CMAKE_CXX_FLAGS "-std=c++11 -O3" )
find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})
include_directories("/usr/include/eigen3")
 
find_package(PCL REQUIRED COMPONENT common io)
include_directories(${PCL_INCLUDE_DIRS})
add_definitions(${PCL_DEFINITIONS})

add_executable(cloudSlam joinMap.cpp)
target_link_libraries(cloudSlam ${OpenCV_LIBS} ${PCL_LIBRARIES})
