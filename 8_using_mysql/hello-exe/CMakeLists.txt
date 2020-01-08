FIND_PACKAGE( Boost 1.58.0 COMPONENTS program_options system REQUIRED )
include_directories(${MYSQLCPPCONN_INCLUDE_DIRS})
INCLUDE_DIRECTORIES( ${Boost_INCLUDE_DIR} )

add_executable(cmake-good main.cpp)



target_link_libraries(cmake-good mysqlclient mysqlcppconn)