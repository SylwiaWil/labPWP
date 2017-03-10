project (PierwszyProgram)
add_executable(Laborka main.cpp)
cmake_minimum_required (VERSION 2.6)
include_directories ("${PROJECT_SOURCE_DIR}/Trygonometria")
add_subdirectory (Trygonometria)
target_link_libraries (Trygonometria)