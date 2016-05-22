cmake_minimum_required(VERSION 3.2)
project(testing_demos_cpp)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

# add git submodule google test
# need to be downloaded from git
# git submodule int
# git submodule update
add_subdirectory(vendor/googletest)

