cmake_minimum_required(VERSION 2.8)     #声明要求的camke最低版本
project(HelloSlam)                      #声明一cmake工程

set( CMAKE_BUILD_TYPE Release )
set( CMAKE_CXX_FLAGS "-std=c++11 -O3" )
list( APPEND CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake_modules )

find_package( Ceres REQUIRED )
include_directories( ${CERES_INCLUDE_DIRS} )
find_package( OpenCV REQUIRED )
include_directories( ${OpenCV_DIRS} )
add_executable(helloSlam main.cpp) #添加一个可执行文件
target_link_libraries( helloSlam ${CERES_LIBRARIES} ${OpenCV_LIBS} )

