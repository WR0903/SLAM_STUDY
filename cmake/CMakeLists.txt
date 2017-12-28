cmake_minimum_required(VERSION 2.8)
project(HelloSlam)
add_executable(helloSlam helloSlam.cpp)

add_library(hello libHelloSlam.cpp)
add_library(hello_shared SHARED libHelloSlam.cpp)

add_executable(useHello useHelloSlam.cpp)
target_link_libraries(useHello hello_shared)
