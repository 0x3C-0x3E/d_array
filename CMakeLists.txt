cmake_minimum_required(VERSION 3.10)
project(d_array C)

# Enable 64-bit ELF output explicitly (platform dependent but mostly automatic)
set(CMAKE_SYSTEM_PROCESSOR x86_64)

# Set compiler flags
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -g -fsanitize=address")

# Recursively collect all .c and .h files in src/
file(GLOB_RECURSE SRC_FILES CONFIGURE_DEPENDS src/*.c src/*.h)

# Create executable from all found source files
add_executable(d_array ${SRC_FILES})

