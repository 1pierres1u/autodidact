cmake_minimum_required(VERSION 3.5 FATAL_ERROR)
project(daily_cpp LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(code
	STATIC
	app_a.h
	app_a.cpp
	app_b.h
	app_b.cpp
	)

add_executable(daily_cpp app.cpp)
target_link_libraries(daily_cpp code)
