cmake_minimum_required(VERSION 3.28)

project(GoogleTestExample)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Locate GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})
# Link runTests with what we want to test and the GTest and pthread library
add_executable(runTests
        test_checkDifference.cpp
        ../src/Uri1007/Difference.cpp
)
target_link_libraries(runTests GTest::GTest GTest::Main pthread)