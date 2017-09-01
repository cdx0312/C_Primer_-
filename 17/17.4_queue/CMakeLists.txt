cmake_minimum_required(VERSION 3.7)
project(17_4_queue)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c queue.h queue.c)
add_executable(17_4_queue ${SOURCE_FILES})