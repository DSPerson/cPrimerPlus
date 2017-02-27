cmake_minimum_required(VERSION 3.6)
project(2_24)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Coordinate.cpp Coordinate.h)
add_executable(2_24 ${SOURCE_FILES})