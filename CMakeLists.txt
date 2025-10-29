cmake_minimum_required(VERSION 3.10)

project(MA_test2)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Wpedantic")


set(SOURCE_FILES main.cpp)

add_executable(MA_test2 ${SOURCE_FILES})