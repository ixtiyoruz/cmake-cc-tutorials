add_executable(myapp main.cpp)
message(STATUS ${TENSORFLOW_DIR})
message(STATUS ${TENSORFLOW_DIR}/bazel-genfiles)
message(STATUS ${TENSORFLOW_DIR})
message(STATUS ${TENSORFLOW_EXTERNAL_DIR}/external/protobuf_archive/src)
message(STATUS ${TENSORFLOW_EXTERNAL_DIR}/external/eigen_archive)
message(STATUS ${TENSORFLOW_EXTERNAL_DIR}/external/nsync/public)

target_include_directories(myapp 
PUBLIC ${TENSORFLOW_DIR}/contrib/makefile/downloads/absl
PUBLIC ${TENSORFLOW_DIR}
#for array_ops.h
PUBLIC ${TENSORFLOW_DIR}/bazel-genfiles
# headers for external packages
PUBLIC ${TENSORFLOW_EXTERNAL_DIR}/external/protobuf_archive/src
PUBLIC ${TENSORFLOW_EXTERNAL_DIR}/external/eigen_archive
PUBLIC ${TENSORFLOW_EXTERNAL_DIR}/external/nsync/public
#https://github.com/tensorflow/tensorflow/issues/22240#issuecomment-420782646
PUBLIC /home/ixtiyor/Downloads/tensorflow/tensorflow/contrib/makefile/downloads/absl/
#this project
PUBLIC src/
)

target_link_libraries(myapp
    tensorflow_cc
    ${CMAKE_THREAD_LIBS_INIT}
    ${CMAKE_DL_LIBS}
)

