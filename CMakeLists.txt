#set(CMAKE_VERBOSE_MAKEFILE 1)
cmake_minimum_required(VERSION 3.0)

project(state-man CXX)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_executable(state-man
    src/main.cpp
    src/character.hpp src/character.cpp src/states.hpp src/states.cpp src/main.hpp src/state_mini.cpp src/state_mini.hpp src/state_naive.hpp src/state_naive.cpp)
include_directories(
    src
)
target_compile_options(state-man PRIVATE
    -std=c++11
    -Wall
    -Wextra
)
