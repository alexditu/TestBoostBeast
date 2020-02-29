include_directories (
	"${CMAKE_SOURCE_DIR}/dependencies/include"
	"${CMAKE_SOURCE_DIR}/src/libs/liblog/include"

	${Boost_INCLUDE_DIRS}
)


# add_link_options("-pthread")

# Older cmake versions don't know about add_link_options()
set (CMAKE_SHARED_LINKER_FLAGS "-pthread")
set (CMAKE_EXE_LINKER_FLAGS "-pthread")

add_executable (beast-client main.cpp)

target_link_libraries (beast-client liblog)