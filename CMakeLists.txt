cmake_minimum_required(VERSION "3.14")
# The compatibility flag for MSVC runtime library flag. Must set "NEW" 
cmake_policy(SET CMP0091 "NEW")   
# Enforce binding to /MT or /MTd
set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")


# Parameters inside project
project("template_application")
# Comment out next line if the project is library
set(EXECUTABLE_NAME ${PROJECT_NAME})


# Do not edit the lines below 

# Test executable and library name
set(TEST_EXECUTABLE_NAME "test_${PROJECT_NAME}")
set(TEST_LIBRARY_NAME "${PROJECT_NAME}_for_test")

# Compiler option
# GoogleTest requirest C++11 or later
set(CMAKE_CXX_STANDARD "11")

# Enable CTest
# This command automatically run the enable_test() command.
# And the CMake specification requires to place the enable_test() at the
# root of the project, to run the ctest correctly. 
# Thus, place this command at the root of project.
include("CTest")


set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include("CPack")

# Subdirectories
add_subdirectory("src")
add_subdirectory("test")


