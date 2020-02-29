cmake_minimum_required (VERSION 3.5)

project (boost-beast-project)

set (boost-beast-project_VERSION_MAJOR 0)
set (boost-beast-project_VERSION_MINOR 1)
set (boost-beast-project_VERSION_PATCH 0)

message (STATUS "project version: ${PROJECT_VERSION}")

add_compile_options (-ggdb -Wall -Wextra -fvisibility=hidden -fvisibility-inlines-hidden)

set (CMAKE_CXX_FLAGS "-std=c++17")

set (CMAKE_VERBOSE_MAKEFILE on)


set (BOOST_ROOT "/home/alex/alex/code/boost/boost_1_72_0")
find_package (Boost 1.72.0 REQUIRED)

add_subdirectory (src)