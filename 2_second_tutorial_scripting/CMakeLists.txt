cmake_minimum_required(VERSION 3.0)

project(MyProject VERSION 1.0.0)

set(MyVariable "this is variable")


message(STATUS "The variable value is ${MyVariable}")

set(mybool False)
set(somstr1 "some str")
set(somestr2 "some str 2")
if(somstr1 STREQUAL  somestr2)
    message(STATUS "str1 = str2")
else()
    message(STATUS "str1 != str2")
endif()

if(NOT mybool)#or ${mybool}
    message(STATUS "condition is met")
else()
    message(STATUS "condition is not met")
endif()
