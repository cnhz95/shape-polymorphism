cmake_minimum_required(VERSION 3.24)
project(shapes)

set(CMAKE_CXX_STANDARD 17)

add_executable(shapes main.cpp Circle.cpp Circle.h Cylinder.cpp Cylinder.h Rectangle.cpp Rectangle.h Rounded_rectangle.cpp Rounded_rectangle.h Shape.cpp Shape.h Parallelepiped.cpp Parallelepiped.h)
