cmake_minimum_required(VERSION 3.17)
project(SampleCpp)

set(CMAKE_CXX_STANDARD 20)

add_executable(sample main.cpp utility.hpp utility.cpp Device.hpp Device.cpp Point.cpp Point.hpp)