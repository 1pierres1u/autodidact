cmake_minimum_required(VERSION 3.5 FATAL_ERROR)
project(library-recipe LANGUAGES CXX)

add_library(message-objs
	OBJECT
	message.hpp
	message.cpp
	)


#old compilers only
set_target_properties(message-objs
	PROPERTIES
	POSITION_INDEPENDENT_CODE 1
	)

add_library(message-shared
	SHARED
	$<TARGET_OBJECTS:message-objs>
	)

set_target_properties(message-shared
	PROPERTIES
	OUTPUT_NAME: "message"
	)

add_library(message-static
	STATIC
	$<TARGET_OBJECTS:message-objs>
	)

set_target_properties(message-static
	PROPERTIES
	OUTPUT_NAME: "message"
	)

add_executable(hello-world hello_world.cpp)
target_link_libraries(hello-world message-static)
