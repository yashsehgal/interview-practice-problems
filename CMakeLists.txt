cmake_minimum_required(VERSION 3.13)
project(interview-practice-problems)

set(CMAKE_CXX_STANDARD 14)

#include_directories(rock-paper-scissors-cpp-version game_logic.h)
add_executable(interview-practice-problems main.cpp algorithms/BinarySearch.h datafile-handling/SearchTextInDatafile.h)
