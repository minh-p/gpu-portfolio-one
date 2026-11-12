cmake_minimum_required(VERSION 4.4)

project(Triangle)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_library(library)
target_sources(library
  PRIVATE
  src/library.cc
  PUBLIC
  FILE_SET internals
  TYPE HEADERS
  BASE_DIRS
  include
  FILES
  include/library.h
)
target_compile_features(library PUBLIC cxx_std_20)
# Disables GNU Extensions For Portability
set_target_properties(library PROPERTIES
    CXX_EXTENSIONS OFF
)

add_executable(triangle)
target_sources(triangle PRIVATE src/main.cc)
target_link_libraries(triangle PRIVATE library)
