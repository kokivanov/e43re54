cmake_minimum_required(VERSION 3.20.1)

project("Badass")

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/../bin")

add_subdirectory("lib")
add_subdirectory("projects")
add_subdirectory("tests")