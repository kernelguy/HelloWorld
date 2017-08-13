cmake_minimum_required(VERSION 3.7)
project ("HelloWorld")
set (App_VERSION_MAJOR 0)
set (App_VERSION_MINOR 1)

# configure a header file to pass some of the CMake settings
# to the source code
configure_file (
  "${PROJECT_SOURCE_DIR}/AppConfig.h.in"
  "${PROJECT_BINARY_DIR}/AppConfig.h"
  )
 
# add the binary tree to the search path for include files
# so that we will find TutorialConfig.h
include_directories("${PROJECT_BINARY_DIR}")

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
add_dependencies("hello-world" Hypodermic Nanolog)

list(REMOVE_ITEM SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/src/Hello World.cpp")
add_executable("hello-world-test" ${TEST_SOURCES} ${SOURCES})
add_dependencies("hello-world-test" Hypodermic Nanolog Doctest)

#target_link_libraries (hello-world Nanolog)
