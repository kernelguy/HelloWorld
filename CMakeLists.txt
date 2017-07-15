cmake_minimum_required(VERSION 2.8.9)
project ("Hello World Project")

include(ExternalProjects.txt)

#Bring the headers into the project
include_directories(SYSTEM
	/usr/include
	/usr/include/c++/5)
 
#Can manually add the sources using the set command as follows:
#set(SOURCES "src/Hello World.cpp" src/Student.cpp)
 
#However, the file(GLOB...) allows for wildcard additions:
file(GLOB_RECURSE SOURCES "src/*.cpp")
 
add_executable("hello-world" ${SOURCES})
