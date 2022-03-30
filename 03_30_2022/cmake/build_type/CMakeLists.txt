cmake_minimum_required(VERSION 3.5 FATAL_ERROR)
project(build_type LANGUAGES CXX)
if(NOT CMAKE_BUILD_TYPE)
	set(CMAKE_BUILD_TYPE Release CACHE STRING "Build type" FORCE)
endif()

message(STATUS "BUILD TYPE: ${BUILD_TYPE}")

message(STATUS "C flags, Debug Configuration: ${CMAKE_C_FLAGS_DEBUG}")
message(STATUS "C flags, Release Configuration: ${CMAKE_C_FLAGS_RELEASE}")
message(STATUS "C flags, Release configuration with Debug info: ${CMAKE_C_FLAGS_RELWITHDEBINFO}")
message(STATUS "C flags, minimal Release Configuration: ${CMAKE_CXX_FLAGS_MINSIZEREL}")
