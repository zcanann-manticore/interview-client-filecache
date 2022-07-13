cmake_minimum_required (VERSION 3.8)
project (FileCache)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED on)

add_executable(FileCache main.cpp FileCache.h FileCache.cpp)
target_link_libraries(FileCache)
