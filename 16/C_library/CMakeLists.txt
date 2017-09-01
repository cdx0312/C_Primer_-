cmake_minimum_required(VERSION 3.7)
project(C_library)

set(CMAKE_C_STANDARD 99)

set(INC_DIR /usr/local/include)
set(LINK_DIR /usr/local/lib)
set(SOURCE_FILES main.c)
include_directories(${INC_DIR})
link_directories(${LINK_DIR})

add_executable(C_library ${SOURCE_FILES})
