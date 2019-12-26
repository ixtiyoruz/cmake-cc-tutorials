cmake_minimum_required(VERSION 3.0 FATAL_ERROR)
#https://nanxiao.me/en/be-wary-of-boost-not-boost-in-cmakelists-txt
find_package(Poco "1.9.4" COMPONENTS Foundation Net)

include_directories(${Poco_INCLUDE_DIRS})
macro(print_all_variables)
    message(STATUS "print_all_variables------------------------------------------{")
    get_cmake_property(_variableNames VARIABLES)
    foreach (_variableName ${_variableNames})
        message(STATUS "${_variableName}=${${_variableName}}")
    endforeach()
    message(STATUS "print_all_variables------------------------------------------}")
endmacro()
print_all_variables()
# default libraries
set(CMAKE_CXX_STANDARD 11)
SET(CMAKE_CXX_FLAGS -pthread)

ADD_EXECUTABLE( pocoexample main.cpp )

TARGET_LINK_LIBRARIES( pocoexample PUBLIC ${Poco_LIBRARIES})


