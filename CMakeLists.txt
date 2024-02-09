cmake_minimum_required(VERSION 3.27)
project(little-math-things)

set(CMAKE_CXX_STANDARD 17)

include_directories(src)

add_executable(little-math-things main.cpp
        src/Fermats_Little_Theorem.cpp
        src/Lucas_Lehmer_Test.cpp)

target_link_libraries(little-math-things gmp gmpxx)