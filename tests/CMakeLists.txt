# Google Test
add_subdirectory(${CMAKE_SOURCE_DIR}/extern/googletest googletest)

# Add source files for tests
set(TEST_SOURCES
#        test_calculatebyweight.cpp
)

# Create a test executable
#add_executable(test_calculatebyweight ${TEST_SOURCES})

# Link test executable with Google Test and the library
#target_link_libraries(test_calculatebyweight PRIVATE CalculateByWeightLib gtest gtest_main)

# Add tests
add_test(NAME CalculateByWeightTests COMMAND test_calculatebyweight)
