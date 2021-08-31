cmake_minimum_required(VERSION 3.17)
project(delivery)

set(CMAKE_CXX_STANDARD 17)
set(GCC_ENABLE_WARNINGS "-01 -Wall -Wno-Wsign-conversion")
set(CMAKE_C_FLAGS "${CMAKE__C_FLAGS} ${GCC_ENABLE_WARNINGS}")
add_executable(delivery main.cpp delivery.h)