cmake_minimum_required(VERSION 3.21)

project(SDL2TemplateProject)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmakeModules/")

find_package(SDL2 REQUIRED)

include_directories(${SDL2_INCLUDE_DIR})
add_executable(${PROJECT_NAME} main.cpp)
set(SDL2_LIBRARIES ${SDL2_LIBRARY})
target_link_libraries(${PROJECT_NAME} ${SDL2_LIBRARY})
