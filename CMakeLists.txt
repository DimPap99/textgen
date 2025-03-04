cmake_minimum_required(VERSION 3.2)

project(textgen)

set(CMAKE_CXX_STANDARD 20)

# Set the include directory
set(INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)

# Add the executable and source files
add_executable(textgen src/main.cpp src/generator.cpp)

# Specify include directories for the target
target_include_directories(textgen PRIVATE ${INCLUDE_DIR})
