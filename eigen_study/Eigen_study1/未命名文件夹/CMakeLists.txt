cmake_minimum_required(VERSION 2.8)     #声明要求的camke最低版本
project(EigenSlam)                      #声明一cmake工程
include_directories("/usr/include/eigen3")
add_executable(EigenSlam eigenMatrix.cpp) #添加一个可执行文件


