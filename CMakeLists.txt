cmake_minimum_required(VERSION 3.5.0)
project(hello VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 23)

add_library(hellolib hellolib.cpp)

add_executable(hello main.cpp)
target_link_libraries(hello PRIVATE hellolib)

include(CTest)
enable_testing()
set(TEST_SOURCES
    tests.cpp
)
add_executable(${PROJECT_NAME}_tests ${TEST_SOURCES})
add_test(NAME tests COMMAND ${PROJECT_NAME}_tests)
target_link_libraries(${PROJECT_NAME}_tests PRIVATE hellolib)

# Optionally, set specific build types for the tests
set_target_properties(${PROJECT_NAME}_tests PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED True
)
