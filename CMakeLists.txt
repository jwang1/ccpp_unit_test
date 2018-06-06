cmake_minimum_required(VERSION 3.10)
project(gmock_cmake)

set(CMAKE_CXX_STANDARD 11)

#add_executable(gmock_cmake main/main.cpp)

add_subdirectory(main)
add_subdirectory(test)
add_subdirectory(libfoo)
add_subdirectory(libbar)

