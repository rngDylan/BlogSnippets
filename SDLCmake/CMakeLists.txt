cmake_minimum_required(VERSION 3.0)
project(BoidsSDL)

#Note for Windows: find_package doesn't work well as we don't have lib directories, set an environment variable called SDL2 that has the path to your SDL directory.

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${PROJECT_SOURCE_DIR}/cmake")
set(BIN_DIR ${PROJECT_SOURCE_DIR}/bin)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIR})
include_directories(include)

add_subdirectory(source)