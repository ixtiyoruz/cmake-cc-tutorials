# source code directory of tensorflow
TF_DIR=/home/ixtiyor/Downloads/tensorflow/

# external source code directory of tensorflow
TF_EXTERNAL_DIR=/home/ixtiyor/Downloads/tensorflow/bazel-tensorflow

# bazel build directory of tensorflow where `libtensorflow.so` exists.
# Please specify absolute path, otherwise cmake cannot find lib **. A
TF_BUILD_DIR=/home/ixtiyor/Downloads/tensorflow/bazel-bin/tensorflow

cmake -DTENSORFLOW_DIR=${TF_DIR}\
      -DTENSORFLOW_EXTERNAL_DIR=${TF_EXTERNAL_DIR}\
      -DTENSORFLOW_BUILD_DIR=${TF_BUILD_DIR}\
      -DSANITIZE_ADDRESS=On\
      -Bbuild\
      -H.

cd build
make
cp src/myapp ../
