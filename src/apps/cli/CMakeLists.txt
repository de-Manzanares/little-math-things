cmake_minimum_required(VERSION 3.7)

set(CMAKE_CXX_STANDARD 17)

set(NAME cli-app)
set(LIB ${NAME}_lib)
set(SOURCE
        cli-app.cpp
        ../../lib/Administrative_Assistant/Administrative_Assistant.cpp)

project(${NAME})

include_directories(../../lib/Administrative_Assistant)

add_library(${LIB} ${SOURCE})

add_executable(${NAME} ${SOURCE})
target_link_libraries(${NAME} ${LIB})
