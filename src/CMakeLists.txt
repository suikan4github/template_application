# Project Parameters.
# File name of main()
set(MAIN_FILE_PATTERN ".*/main.cpp$")

# Do not edit the lines below 

# List up all source files including main.cpp
file(GLOB ALL_SRCS "*.cpp")

add_executable(${EXECUTABLE_NAME} ${ALL_SRCS})

# Remove the "main file" from list to create a library for test
set( LIB_SRCS ${ALL_SRCS})                                  # create a new list as copy
list(FILTER LIB_SRCS EXCLUDE REGEX ${MAIN_FILE_PATTERN})    # Filter out the main file

# Library for testing ( without main file)
add_library(${TEST_LIBRARY_NAME} STATIC
    ${LIB_SRCS})
