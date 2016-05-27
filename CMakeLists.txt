cmake_minimum_required(VERSION 3.2)
project(testing_demos_cpp)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

include_directories(${CMAKE_CURRENT_LIST_DIR}/src/include)

add_library(calculator
        ${CMAKE_CURRENT_LIST_DIR}/src/calculator.cpp)


# add git submodule google test
# need to be downloaded from git
# git submodule int
# git submodule update
add_subdirectory(vendor/googletest)

# include gmock and gtest includes
include_directories(
        ${CMAKE_CURRENT_LIST_DIR}/vendor/googletest/googlemock/include
        ${CMAKE_CURRENT_LIST_DIR}/vendor/googletest/googletest/include)

add_executable(unittest
        ${CMAKE_CURRENT_LIST_DIR}/test/testrunner.cpp
        ${CMAKE_CURRENT_LIST_DIR}/test/calculatortest.cpp)

target_link_libraries(unittest gmock)