cmake_minimum_required(VERSION 4.4)

project(Triangle)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_executable(triangle)
target_sources(triangle PRIVATE src/main.cc)
