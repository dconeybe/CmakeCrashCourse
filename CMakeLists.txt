cmake_minimum_required(VERSION 3.6 FATAL_ERROR)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED YES)
set(CMAKE_CXX_EXTENSIONS NO)

project(hello LANGUAGES CXX)

set(HELLO_COMPILER_WARNINGS_ENABLED YES CACHE BOOL "compiler warnings enabled")

if(HELLO_COMPILER_WARNINGS_ENABLED)
  if((CMAKE_CXX_COMPILER_ID MATCHES "Clang") OR (CMAKE_CXX_COMPILER_ID STREQUAL "GNU"))
    add_compile_options(-Wall -Wpedantic -Werror)
  elseif(CMAKE_CXX_COMPILER_ID STREQUAL "MSVC")
    add_compile_options(/W4 /WX)
  endif()
endif()

add_subdirectory(mylib)
add_executable(hello hello.cc)
target_link_libraries(hello mylib)

add_compile_definitions("HELLO_BUILD_TYPE=$<CONFIG>")
