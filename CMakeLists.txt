cmake_minimum_required(VERSION 3.8)
project(PHP_1_0)

set(CMAKE_CXX_STANDARD 11)

file(GLOB SOURCE_FILES "*.cpp" "*.hpp")

add_executable(PHP_1_0 ${SOURCE_FILES})
