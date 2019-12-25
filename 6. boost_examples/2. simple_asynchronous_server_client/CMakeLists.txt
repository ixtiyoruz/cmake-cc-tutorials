cmake_minimum_required(VERSION 3.0 FATAL_ERROR)
#https://nanxiao.me/en/be-wary-of-boost-not-boost-in-cmakelists-txt
FIND_PACKAGE( Boost 1.58.0 COMPONENTS program_options system REQUIRED )
INCLUDE_DIRECTORIES( ${Boost_INCLUDE_DIR} )

# default libraries
set(CMAKE_CXX_STANDARD 11)
SET(CMAKE_CXX_FLAGS -pthread)

ADD_EXECUTABLE( serverexample server.cpp )
ADD_EXECUTABLE( clientexample client.cpp )

TARGET_LINK_LIBRARIES( clientexample LINK_PUBLIC ${Boost_LIBRARIES} )
TARGET_LINK_LIBRARIES( serverexample LINK_PUBLIC ${Boost_LIBRARIES} )


