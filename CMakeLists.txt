cmake_minimum_required(VERSION 3.24)
project(Course_Work)

set(CMAKE_CXX_STANDARD 17)

add_executable(Course_Work main.cpp)

set(SFML_STATIC_LIBRARIES TRUE)
find_package(SFML COMPONENTS graphics REQUIRED CONFIG)
target_link_libraries(Course_Work sfml-graphics)

add_subdirectory(src)