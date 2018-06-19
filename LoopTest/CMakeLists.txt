cmake_minimum_required(VERSION 3.10)
project(LoopTest)

set(CMAKE_CXX_STANDARD 14)

add_executable(LoopTest main.cpp cmake-build-debug/TestClass.cpp cmake-build-debug/TestClass.h)