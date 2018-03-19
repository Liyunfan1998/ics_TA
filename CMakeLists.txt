cmake_minimum_required(VERSION 3.8)
project(lab1)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES handout.c yours.c yours.h handout.h)
add_executable(lab1 ${SOURCE_FILES})