include_directories ("${CMAKE_SOURCE_DIR}/dependencies/include")
include_directories ("./include")

add_library (liblog STATIC log.cpp)