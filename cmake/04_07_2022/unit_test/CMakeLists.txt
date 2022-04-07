cmake_minimum_required(VERSION 3.5 FATAL_ERROR)
project(unit_test LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


find_package(PythonInterp REQUIRED)

add_library(sum_integers sum_integers.cpp)

add_executable(sum_up main.cpp)
target_link_libraries(sum_up sum_integers)

#testing binary
add_executable(cpp_test test.cpp)
target_link_libraries(cpp_test sum_integers)

include(CTest)
enable_testing()

add_test(
	NAME cpp_test
	COMMAND $<TARGET_FILE:cpp_test>
	)

add_test(
	NAME python_test_long
	COMMAND ${PYTHON_EXECUTABLE} ${CMAKE_CURRENT_SOURCE_DIR}/test.py
	--executable $<TARGET_FILE:sum_up>
	)
