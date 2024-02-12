cmake_minimum_required(VERSION 3.7)

set(CMAKE_CXX_STANDARD 17)

set(NAME fermats-little-theorem)
set(LIB ${NAME}_lib)
set(SOURCE Fermats_Little_Theorem.cpp)
set(LINK gmp gmpxx)

project(${NAME})

include_directories()

add_library(${LIB} ${SOURCE})
target_link_libraries(${LIB} ${LINK})

add_executable(${NAME} ${SOURCE})
target_link_libraries(${NAME} ${LINK})