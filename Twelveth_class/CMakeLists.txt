cmake_minimum_required(VERSION 3.7)
project(Twelveth_class)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c partb.c rand0.c s_and_r.c diceroll.c diceroll.h)
add_executable(Twelveth_class ${SOURCE_FILES})