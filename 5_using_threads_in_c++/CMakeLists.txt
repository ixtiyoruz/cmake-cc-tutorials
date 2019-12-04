# here you have to specify the minimum version of cmake
cmake_minimum_required(VERSION 3.0)

#this is our project name
project(Myproject VERSION 1.0.0)
set(CMAKE_CXX_STANDARD 11)
SET(CMAKE_CXX_FLAGS -pthread)
add_subdirectory(hello-exe)

# [point 1] adding a library
# you can name it as you want i just put say-hello and after that put the filenames of the library
# then you can specify library type (it canbe SHARED , STATIC, MODULE... )
# if shared it will create .so file
# if empty it will create static library which linked to .a file
# if MODULE it will call another software(i dont know how to use it)
#add_library(
#    say-hello
#    hello.hpp
#    hello.cpp
#)
# above code was commented due to library moved to subdirectory say-hello

# this one adds executable string for the project
# first argument is name of the project 
# other arguments are sources
# and in the main.cpp there we included library hello.hpp so we have
# to show its executer here as well if you want as like  add_executable(cmake-good main.cpp hello.cpp)
# but i want this is not a good method of using libraries , for better use look at the [point 1]
#add_executable(cmake-good main.cpp)
#above command commented due to main.cpp moved to another directory

# here we link created library with the executable 
# target_link_libraries(cmake-good say-hello)
# aboce command changed due to structure change, and moved to the cmakelists.txt file of that directory (hello-exe)
