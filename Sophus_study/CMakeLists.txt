cmake_minimum_required(VERSION 2.8)     #声明要求的camke最低版本
project(EigenSlam)                      #声明一cmake工程
set( CMAKE_BUILD_TYPE Release )
set( CMAKE_CXX_FLAGS "-std=c++11 -O3" )
find_package(Sophus REQUIRED)
include_directories("/usr/include/eigen3")
include_directories(${Sophus_INCLUDE_DIRS})
add_executable(EigenSlam useSophus.cpp) #添加一个可执行文件
target_link_libraries(EigenSlam ${Sophus_LIBRARIES})


