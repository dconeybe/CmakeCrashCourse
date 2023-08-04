cmake_minimum_required(VERSION 3.6 FATAL_ERROR)

project(hello LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED YES)
set(CMAKE_CXX_EXTENSIONS NO)

add_executable(hello hello.cc)
