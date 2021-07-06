cmake_minimum_required(VERSION 3.10)

project(CLRT VERSION 1.0)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/lib")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${PORJECT_BINARY_DIR}/lib")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/bin")

add_subdirectory(tests)

add_library(CLRT clrt.c)

# Configuration header file
configure_file(CLRTConfig.h.in CLRTConfig.h)
target_include_directories(CLRT PUBLIC "${PROJECT_BINARY_DIR}")
