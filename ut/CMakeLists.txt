cmake_minimum_required(VERSION 3.0)

project("tests")
enable_testing()
add_executable(tests test.cpp)
target_link_libraries(tests gtest gmock)
add_test(NAME tests COMMAND ./tests)

