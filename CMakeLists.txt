cmake_minimum_required(VERSION 2.8.9)
project ("Hello World Project")

set (CMAKE_CXX_STANDARD 11)

include(ExternalProjects.txt)
include(Intl.cmake)

#enable_testing()

#Bring the headers into the project
include_directories(SYSTEM
	/usr/include
	/usr/include/c++/5)

include_directories(BEFORE src/.)
 
#Can manually add the sources using the set command as follows:
#set(SOURCES "src/Hello World.cpp" src/Student.cpp)
 
#However, the file(GLOB...) allows for wildcard additions:
file(GLOB_RECURSE SOURCES "src/*.cpp")
file(GLOB_RECURSE TEST_SOURCES "test/*.cpp")

add_executable("hello-world" ${SOURCES})
add_dependencies("hello-world" Hypodermic)

list(REMOVE_ITEM SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/src/Hello World.cpp")
add_executable("hello-world-test" ${TEST_SOURCES} ${SOURCES})
add_dependencies("hello-world-test" Hypodermic Doctest)
