cmake_minimum_required(VERSION 3.7)
project(CTest)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES rhodium.c)
add_executable(CTest ${SOURCE_FILES})