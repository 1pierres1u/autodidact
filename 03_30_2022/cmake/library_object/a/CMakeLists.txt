cmake_minimum_required(VERSION 3.5 FATAL_ERROR)
project(recipe-library LANGUAGES CXX)

add_library(message-objs
	OBJECT
	message.hpp
	message.cpp
	)


#for only older compilers
set_target_properties(message-objs
	PROPERTIES
	POSITION_INDEPENDENT_CODE 1
	)



add_library(message-shared
	SHARED
	$<TARGET_OBJECTS:message-objs>
	)

add_library(message-static
	STATIC
	$<TARGET_OBJECTS:message-objs>
	)


add_executable(hello-world hello_world.cpp)
target_link_libraries(hello-world message-static)
