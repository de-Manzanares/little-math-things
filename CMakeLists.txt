cmake_minimum_required(VERSION 3.26)
project(Fermats_little_theorem)

set(CMAKE_CXX_STANDARD 17)

add_executable(Fermats_little_theorem main.cpp)
target_link_libraries(Fermats_little_theorem gmp gmpxx)
