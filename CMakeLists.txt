cmake_minimum_required(VERSION 3.3)
project(TruthTableCmake)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES mainShort.c)
add_executable(TruthTableCmake ${SOURCE_FILES})