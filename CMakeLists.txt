cmake_minimum_required(VERSION 3.19)

project(superexceptions LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)

option(EXAMPLES "Build examples" OFF)

set(SOURCES
    include/lh/superexceptions.hpp
)
add_library(${PROJECT_NAME} INTERFACE ${SOURCES})

if(EXAMPLES)
    add_subdirectory(examples)
endif()
