cmake_minimum_required(VERSION 3.5 FATAL_ERROR)
project(compiler_flags LANGUAGES CXX)

message(STATUS "C++ compiler flags: ${CMAKE_CXX_FLAGS}")
list(APPEND flags "-fPIC" "-Wall")
if(NOT WIN32)
	list(APPEND flags "-Wextra" "-Wpedantic")
endif()

add_library(message
	STATIC
	message.cpp
	message.hpp
	)

target_compile_options(message
	PRIVATE
	${flags}
	)

add_executable(hello-world hello_world.cpp)
target_compile_options(hello-world
	PRIVATE
	"-fPIC"
	)
target_link_libraries(hello-world message)
