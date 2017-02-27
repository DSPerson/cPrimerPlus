cmake_minimum_required(VERSION 3.6)
project(2_23_1)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Demo.cpp Demo.h Teacher.cpp Teacher.h cmake-build-debug/拷贝构造函数/Teacher.cpp cmake-build-debug/拷贝构造函数/Teacher.h)
add_executable(2_23_1 ${SOURCE_FILES})