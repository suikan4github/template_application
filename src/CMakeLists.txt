# Project Parameters.
# File name of main()
set(MAIN_FILE_PATTERN ".*/main.cpp$")

#----------------------------------------------------------------------------
# Do not edit the lines below 

# List up all source files including main.cpp
file(GLOB ALL_SRCS "*.cpp")

add_executable(${EXECUTABLE_NAME} ${ALL_SRCS})

    # Add pthread library to support std::thread
    # In the case of MSVC, this is not required.
    if (NOT(MSVC))
        target_link_libraries(${EXECUTABLE_NAME} "pthread")
    endif(NOT(MSVC))

