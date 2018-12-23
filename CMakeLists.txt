cmake_minimum_required(VERSION 3.8)
project(dynamic_array)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        LICENSE
        README.md dynamic_array.h dynamic_array.cpp)

add_executable(dynamic_array ${SOURCE_FILES})