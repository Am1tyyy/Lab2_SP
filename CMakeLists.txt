cmake_minimum_required(VERSION 3.10)
project(calculator_app)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add include directory to search path
include_directories(C:/SP/lab2/calculator_project/include)

# Add library
add_library(calculator STATIC calculator_project/src/calculator.cpp)

# Add executable
add_executable(calculator_app calculator_project/src/main.cpp)

# Link library to executable
target_link_libraries(calculator_app PRIVATE calculator)
