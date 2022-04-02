cmake_minimum_required(VERSION 3.5 FATAL_ERROR)
project(standard LANGUAGES CXX)

set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

add_library(message
	SHARED
	message.cpp 
	message.hpp
	)

set_target_properties(message
	PROPERTIES
	CXX_STANDARD 11
	CXX_EXTENSIONS OFF
	CXX_STANDARD_REQUIRED ON
	POSITION_INDEPENDENT_CODE 1
	)

add_executable(hello-world hello_world.cpp)
set_target_properties(hello-world
	PROPERTIES
	CXX_STANDARD 14
	CXX_EXTENSIONS OFF
	CXX_STANDARD_REQUIRED ON
	)
target_link_libraries(hello-world message)
