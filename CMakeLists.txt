cmake_minimum_required(VERSION 3.13)
project(interview-practice-problems)

# setting up c++ version standards
set(CMAKE_CXX_STANDARD 14)

# setting up header files
set(CMAKE_INCLUDE_PATH / interview-practice-problems/algorihms/BinarySearch.h)
set(CMAKE_INCLUDE_PATH / interview-practice-problems/algorihms/LinearSearch.h)
set(CMAKE_INCLUDE_PATH / interview-practice-problems/datafile-handling/SearchTextInDatafile.h)


#include_directories(rock-paper-scissors-cpp-version game_logic.h)
add_executable(interview-practice-problems main.cpp	)
