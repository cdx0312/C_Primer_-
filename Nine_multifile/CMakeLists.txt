cmake_minimum_required(VERSION 3.7)
project(Nine_multifile)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c hotel.h hotel.c)
add_executable(Nine_multifile ${SOURCE_FILES})