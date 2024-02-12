cmake_minimum_required(VERSION 3.7)

set(CMAKE_CXX_STANDARD 17)

set(NAME little-math-things)

set(SUBDIR
        src/apps/Fermats-Little-Theorem
        src/apps/Lucas-Lehmer-Test)

project(${NAME})

add_subdirectory(${SUBDIR})

add_executable(${NAME} src/main.cpp)
