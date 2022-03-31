cmake_minimum_required(VERSION 3.5 FATAL_ERROR)
project(recipe-library LANGUAGES CXX)

add_library(message
	STATIC
	message.hpp
	message.cpp
	)

add_executable(hello-world hello_world.cpp)
target_link_libraries(hello-world message)
