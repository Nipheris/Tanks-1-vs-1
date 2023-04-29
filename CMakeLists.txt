cmake_minimum_required(VERSION 3.24)
project(Course_Work)

set(CMAKE_CXX_STANDARD 17)

add_executable(Course_Work main.cpp)

set(SFML_STATIC_LIBRARIES TRUE)
set(SFML_DIR D:/Programming/C++/sfml/SFML-2.5.1/lib/cmake/SFML)
find_package(SFML COMPONENTS system window graphics audio network REQUIRED)
include_directories(D:/Programming/C++/sfml/SFML-2.5.1/include)
target_link_libraries(Course_Work sfml-system sfml-window sfml-graphics sfml-audio)

add_subdirectory(src)

target_link_libraries(Course_Work game)