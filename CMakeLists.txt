cmake_minimum_required (VERSION 3.5)

project (boost-beast-project)

set (boost-beast-project_VERSION_MAJOR 0)
set (boost-beast-project_VERSION_MINOR 1)
set (boost-beast-project_VERSION_PATCH 0)

message (STATUS "project version: ${PROJECT_VERSION}")

add_compile_options (-ggdb -Wall -Wextra -fvisibility=hidden -fvisibility-inlines-hidden)

set (CMAKE_CXX_FLAGS "-std=c++17")

set (CMAKE_VERBOSE_MAKEFILE on)

add_subdirectory (src)