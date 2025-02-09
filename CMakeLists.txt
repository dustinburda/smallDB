cmake_minimum_required(VERSION 3.27)
project(smallDB)

set(CMAKE_CXX_STANDARD 17)

add_executable(smallDB ./src/main.cpp ./src/Tuple.cpp)
