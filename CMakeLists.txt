cmake_minimum_required(VERSION 3.1 FATAL_ERROR)
project(cpp-gtests VERSION 1.0.0
                   DESCRIPTION "Simple project for TDD"
                   LANGUAGES CXX
)

# configure cxx version:
set(CMAKE_CXX_STANDARD 17)

# config gtest:
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIR})
enable_testing()

include_directories(include)
add_executable(main include/math.h src/main.cpp)


# executable and linker:
add_executable(testCases tests/tests.cpp)
target_link_libraries(testCases gtest gtest_main pthread)