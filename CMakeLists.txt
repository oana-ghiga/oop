cmake_minimum_required(VERSION 3.24)
project(oop)

set(CMAKE_CXX_STANDARD 14)

include_directories(lab3)

add_executable(oop
        lab3/Sort.cpp
        lab3/Sort.h
        .gitignore
        README.md lab3/main.cpp)
