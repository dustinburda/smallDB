cmake_minimum_required(VERSION 3.27)
project(smallDB)

set(CMAKE_CXX_STANDARD 17)

file(GLOB SOURCE_FILES "src/*.cpp")

add_executable(smallDB ${SOURCE_FILES})
