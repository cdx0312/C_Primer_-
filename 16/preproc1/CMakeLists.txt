cmake_minimum_required(VERSION 3.7)
project(preproc1)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c)
add_executable(preproc1 ${SOURCE_FILES})