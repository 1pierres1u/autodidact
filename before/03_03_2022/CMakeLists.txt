cmake_minimum_required(VERSION 3.5 FATAL_ERROR)
project(daily_cpp LANGUAGES CXX)

include_directories(include)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


add_executable(daily_cpp app.cpp include/app_a.h include/app_b.h)

