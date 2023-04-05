cmake_minimum_required(VERSION 3.12)
project(example LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)

find_package(fmt REQUIRED)

add_executable(${PROJECT_NAME} example.cpp)
target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_SOURCE_DIR}/include/lh)
target_link_libraries(${PROJECT_NAME} fmt::fmt)
