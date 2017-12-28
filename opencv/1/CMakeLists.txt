cmake_minimum_required(VERSION 2.8)     #声明要求的camke最低版本
project(opencvSlam)                      #声明一cmake工程
set(CMAKE_CXX_FLAGS "-std=c++11")


find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})
add_executable(opencvSlam main.cpp) #添加一个可执行文件
target_link_libraries(opencvSlam ${OpenCV_LIBS})
