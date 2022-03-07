cmake_minimum_required(VERSION 3.0)

project(OpenCVProject)

file(GLOB SOURCES *.cpp)
file(COPY ${CMAKE_SOURCE_DIR}/res/ DESTINATION ${CMAKE_BINARY_DIR})

add_executable(${PROJECT_NAME} ${SOURCES})

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE-DIRECTORIES})
target_link_libraries(${PROJECT_NAME} ${OpenCV_LIBS})

