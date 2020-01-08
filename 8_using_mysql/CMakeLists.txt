# here you have to specify the minimum version of cmake
cmake_minimum_required(VERSION 3.0)

#this is our project name
project(Myproject VERSION 1.0.0)
set(CMAKE_CXX_STANDARD 11)
SET(CMAKE_CXX_FLAGS -pthread)
FIND_PACKAGE( Boost 1.58.0 COMPONENTS program_options system REQUIRED )

add_subdirectory(hello-exe)