cmake_minimum_required(VERSION 3.5 FATAL_ERROR)
project(option LANGUAGES CXX)

option(USE_LIBRARY "Compile sources into a library" OFF)
message(status "Compile sources into a library? ${USE_LIBRARY}")
set(BUILD_SHARED_LIBS OFF)

list(APPEND ke_sources message.cpp message.hpp)

if(USE_LIBRARY)
	add_library(message ${_sources})
	add_executable(hello_world hello_world.cpp)
	target_link_libraries(hello_world message)
else()
	add_executable(hello-world hello_world.cpp message.cpp message.hpp)
endif()

