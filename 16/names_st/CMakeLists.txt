cmake_minimum_required(VERSION 3.7)
project(names_st)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES names.c names.h useheader.c)
add_executable(names_st ${SOURCE_FILES})