cmake_minimum_required(VERSION 3.15)
project(solver-a)

set(CMAKE_CXX_STANDARD 14)

add_executable(solver-a Demo.cpp TestCounter.cpp doctest.h solver.cpp solver.hpp Test.cpp)
