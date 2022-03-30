cmake_minimum_required(VERSION 3.5 FATAL_ERROR)
project(conditional_recipe LANGUAGES CXX)


set(USE_LIBRARY OFF)
message(STATUS "compile sources into a library? ${USE_LIBRARY}")
set(BUILD_SHARED_LIBS OFF)

list(APPEND _sources message.cpp message.hpp)

if(USE_LIBRARY)
	#A STATIC LIBRARY IS CREATED
	#BECAUSE BUILD_SHARED_LIBS is OFF

	add_library(message ${_sources})
	add_executable(hello-world hello_wolrd.cpp)
	target_link_libraries(hello-world message)
else()
	add_executable(hello-world hello_world.cpp ${_sources})
endif()
