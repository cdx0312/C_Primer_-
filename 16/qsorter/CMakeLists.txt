cmake_minimum_required(VERSION 3.7)
project(qsorter)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c)
add_executable(qsorter ${SOURCE_FILES})