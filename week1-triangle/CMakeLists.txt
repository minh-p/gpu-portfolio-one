cmake_minimum_required(VERSION 4.4)

project(Triangle)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

find_package(SDL3 REQUIRED CONFIG REQUIRED COMPONENTS SDL3-shared)

add_library(renderer)
target_sources(renderer
  PRIVATE
  src/renderer.cc
  PUBLIC
  FILE_SET internals
  TYPE HEADERS
  BASE_DIRS
  include
  FILES
  include/renderer.h
)
target_compile_features(renderer PUBLIC cxx_std_20)

target_link_libraries(renderer PUBLIC SDL3::SDL3)
# Disables GNU Extensions For Portability
set_target_properties(renderer PROPERTIES
    CXX_EXTENSIONS OFF
)

add_executable(triangle)
target_sources(triangle PRIVATE src/main.cc)
target_link_libraries(triangle PRIVATE renderer)

find_package(GTest REQUIRED)
include(GoogleTest)

add_executable(triangle_gtest)
target_sources(triangle_gtest PRIVATE tests/triangle_gtest.cc)

target_link_libraries(triangle_gtest
  PRIVATE
  renderer
  GTest::gtest_main
 )

gtest_discover_tests(triangle_gtest)
