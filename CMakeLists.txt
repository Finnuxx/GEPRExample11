cmake_minimum_required(VERSION 3.16)
project(GEPRExample11)

set(CMAKE_EXE_LINKER_FLAGS "-static")
set(CMAKE_CXX_STANDARD 14)

add_executable(GEPRExample11 main.cpp headers/Calculator.h headers/Circle.h headers/GeometricShape.h headers/Square.h)