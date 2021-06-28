# CMake for my_lib.c

set(LIBRARY_SOURCES "Heap.c")
set(LIBRARY_INCLUDES "${PROJECT_SOURCE_DIR}/include/")

add_library(${LIBRARY_NAME} OBJECT ${LIBRARY_SOURCES})

target_include_directories(${LIBRARY_NAME} PUBLIC ${LIBRARY_INCLUDES})

# target_compile_features(${LIBRARY_NAME} PUBLIC cxx_std_17)

# target_compile_features(${LIBRARY_NAME} PUBLIC CMAKE_C_COMPILER)
