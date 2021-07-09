cmake_minimum_required(VERSION 3.12)

set(PROJECT "Chapter3_2_Stack")

project("${PROJECT}_Project" VERSION 1.0.0 LANGUAGES C)

# set(CMAKE_C_STANDARD            20)
# set(CMAKE_C_STANDARD_REQUIRED   ON)
# set(CMAKE_C_EXTENSIONS          ON)


# Project/Library Names
set(LIBRARY_NAME    "${PROJECT}_MyLib")
set(MAIN            "${PROJECT}_Executable")

# Add libraries
add_subdirectory("${PROJECT_SOURCE_DIR}/src/")

# Add executables
add_subdirectory("${PROJECT_SOURCE_DIR}/app/")