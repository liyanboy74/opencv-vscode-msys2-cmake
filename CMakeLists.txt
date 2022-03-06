cmake_minimum_required(VERSION 3.0)
project(Project)

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE-DIRECTORIES})

add_executable(Project main.cpp)

target_link_libraries(Project ${OpenCV_LIBS})

