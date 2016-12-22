cmake_minimum_required(VERSION 3.5)
project(CPP)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp header/cbase1222.h)
add_executable(CPP ${SOURCE_FILES})