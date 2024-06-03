# Define the Uri1007 executable target
add_executable(Uri1007 main.cpp Difference.cpp)

# Include the Difference.h header file in the Uri1007 target
target_include_directories(Uri1007 PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
