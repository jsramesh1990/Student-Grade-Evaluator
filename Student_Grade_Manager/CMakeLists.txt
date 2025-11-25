cmake_minimum_required(VERSION 3.10)
project(StudentGradeManager)

set(CMAKE_CXX_STANDARD 17)

# Source files
file(GLOB SOURCES "src/*.cpp")

# Main executable
add_executable(student_app ${SOURCES})

# GoogleTest
enable_testing()
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

add_executable(runTests tests/test_student.cpp src/student.cpp)
target_link_libraries(runTests ${GTEST_LIBRARIES} pthread)
add_test(NAME StudentTests COMMAND runTests)

