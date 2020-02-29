include_directories(
	"${CMAKE_SOURCE_DIR}/dependencies/include"
	"${CMAKE_SOURCE_DIR}/src/libs/liblog/include")

add_executable (beast-client main.cpp)

target_link_libraries(beast-client liblog)