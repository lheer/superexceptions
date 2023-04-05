find_package(fmt REQUIRED)

add_executable("example" example.cpp)
target_include_directories("example" PRIVATE ${CMAKE_SOURCE_DIR}/include/lh)
target_link_libraries("example" fmt::fmt)
