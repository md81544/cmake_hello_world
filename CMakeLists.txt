cmake_minimum_required(VERSION 3.5.0)
project(hello VERSION 0.1.0 LANGUAGES C CXX)

find_package(Catch2 CONFIG REQUIRED)

set(CMAKE_CXX_STANDARD 23)

add_library(hellolib hellolib.cpp)

add_executable(hello main.cpp)
target_link_libraries(hello PRIVATE hellolib)

include(Catch)
enable_testing()
set(TEST_SOURCES
    tests.cpp
)
add_executable(${PROJECT_NAME}_tests ${TEST_SOURCES})
target_link_libraries(${PROJECT_NAME}_tests PRIVATE hellolib Catch2 Catch2Main)
catch_discover_tests(${PROJECT_NAME}_tests)

# Optionally, set specific build types for the tests
set_target_properties(${PROJECT_NAME}_tests PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED True
)
