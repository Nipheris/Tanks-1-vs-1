cmake_minimum_required(VERSION 3.24)
project(Course_Work)

set(CMAKE_CXX_STANDARD 17)

set(SFML_STATIC_LIBRARIES TRUE)
find_package(SFML COMPONENTS graphics REQUIRED CONFIG)

add_subdirectory(src)
