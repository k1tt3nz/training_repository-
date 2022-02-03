cmake_minimum_required(VERSION 3.21)
project(course C)

set(CMAKE_C_STANDARD 11)

add_executable(all_labs_repeat main.c)

include_directories(libs/algorithms/array)
include_directories(libs/data_structure/structure_point)
include_directories(libs/data_structure/structure_vector)