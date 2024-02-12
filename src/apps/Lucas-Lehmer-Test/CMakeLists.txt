cmake_minimum_required(VERSION 3.7)

set(CMAKE_CXX_STANDARD 17)

set(NAME lucas-lehmer-test)
set(LIB ${NAME}_lib)
set(SOURCE Lucas_Lehmer_Test.cpp)
set(LINK gmp gmpxx)

project(${NAME})

include_directories()

add_library(${LIB} ${SOURCE})
target_link_libraries(${LIB} ${LINK})

add_executable(${NAME} ${SOURCE})
target_link_libraries(${NAME} ${LINK})