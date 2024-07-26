cmake_minimum_required(VERSION 3.0)

project(SFML_Project)

set(CMAKE_CXX_STANDARD 11)

find_package(SFML 2.5 COMPONENTS graphics window system REQUIRED)

add_executable(sfml-app main.cpp)

target_link_libraries(sfml-app sfml-graphics sfml-window sfml-system)

