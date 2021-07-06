cmake_minimum_required(VERSION 3.10)

add_executable(test test.c)

target_include_directories(test PUBLIC "../")

target_link_libraries(test PUBLIC CLRT)
