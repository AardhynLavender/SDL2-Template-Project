cmake_minimum_required(VERSION 3.22)
project(untitled1)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/")

find_package(SDL2 REQUIRED)
include_directories(${SDL_INCLUDE_DIRS})

add_executable(untitled1 main.cpp)
target_link_libraries(untitled1 ${SDL2_LIBRARIES})
