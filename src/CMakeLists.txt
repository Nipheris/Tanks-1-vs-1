add_executable(Course_Work)
file(GLOB_RECURSE SOURCE_FILES CONFIGURE_DEPENDS *.cpp *.h)
target_sources(Course_Work PRIVATE ${SOURCE_FILES})
target_link_libraries(Course_Work sfml-graphics)
