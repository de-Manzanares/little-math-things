cmake_minimum_required(VERSION 3.7)

set(CMAKE_CXX_STANDARD 17)

set(NAME little-math-things)

project(${NAME})

add_subdirectory(src/apps/cli)

include_directories(src/lib)

add_executable(${NAME} src/main.cpp)
target_link_libraries(${NAME} cli-app_lib)
