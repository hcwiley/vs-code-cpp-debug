# author: H. Cole Wiley
# Copyright 2020

cmake_minimum_required(VERSION 3.10)

project(CppDebugExample)

add_library(ExampleLibrary library.cpp)

add_executable(ExampleApp main.cpp)

target_link_libraries(ExampleApp ExampleLibrary)
