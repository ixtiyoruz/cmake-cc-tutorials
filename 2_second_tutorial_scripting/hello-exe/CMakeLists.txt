add_executable(cmake-good main.cpp)

# here we link created library with the executable 
target_link_libraries(cmake-good say-hello)