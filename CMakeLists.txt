cmake_minimum_required(VERSION 3.14)
project(week2)

#
# GoogleTest Setup
# ref: https://google.github.io/googletest/quickstart-cmake.html
#

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# declares a dependency on GoogleTest which is downloaded from GitHub
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

# Enables testing for this directory and below
enable_testing()
include(GoogleTest)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

find_package(Doxygen
             REQUIRED dot
             OPTIONAL_COMPONENTS mscgen dia)
#
# c++ Boilerplate Starts Here
#
add_subdirectory(libs)
add_subdirectory(app)
add_subdirectory(test)

set(DOXYGEN_GENERATE_HTML YES)
set(DOXYGEN_GENERATE_MAN YES)

doxygen_add_docs(docs
	${PROJECT_SOURCE_DIR}
	# ${PROJECT_SOURCE_DIR}/app
	# ${PROJECT_SOURCE_DIR}/Problem1-1
	# ${PROJECT_SOURCE_DIR}/Problem1-2
	# ${PROJECT_SOURCE_DIR}/Problem1-3
	# ${PROJECT_SOURCE_DIR}/Problem1-4
	# ${PROJECT_SOURCE_DIR}/Problem1-5
	# ${PROJECT_SOURCE_DIR}/libs
	# ${PROJECT_SOURCE_DIR}/include
	COMMENT "Generate man pages"
)

