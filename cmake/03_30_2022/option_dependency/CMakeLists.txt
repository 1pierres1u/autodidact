cmake_minimum_required(VERSION 3.5 FATAL_ERROR)
project(option_dependency LANGUAGES CXX)

option(USE_LIBRARY "Compile sources into a library" OFF)
message(STATUS "Compile sources into a library ${USE_LIBRARY}")
set(BUILD_SHARED_LIBS OFF)


list(APPEND _sources message.cpp message.hpp)





if(USE_LIBRARY)
	include(CmakeDependentOption)

	add_library(message ${_sources})

	cmake_dependent_option(
			MAKE_STATIC_LIBRARY "Compile sources into a static library" OFF
			"USE_LIBRARY" ON
		)
	cmake_dependent_option(
			MAKE_SHARED_LIBRARY "Compile sources into a shared library" ON
			"USE_LIBRARY" ON
			)
	add_executable(hello-world hello_world.cpp)
	target_link_libraries(hello-world message)
else()
	add_executable(hello-world hello_world.cpp message.cpp message.hpp)
endif()



