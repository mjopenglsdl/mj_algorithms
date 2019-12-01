cmake_minimum_required(VERSION 3.1.2)

project(mj_algorithms)

SET(CMAKE_CXX_STANDARD 11)

# message("CMAKE_BUILD_TYPE: ${CMAKE_BUILD_TYPE}")
SET(CMAKE_BUILD_TYPE "Debug")
SET(CMAKE_CXX_FLAGS_DEBUG "$ENV{CXXFLAGS} -O0 -Wall -g")
# SET(CMAKE_CXX_FLAGS_RELEdeASE "$ENV{CXXFLAGS} -O3 -Wall")

add_subdirectory(src)