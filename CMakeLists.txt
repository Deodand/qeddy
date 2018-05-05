cmake_minimum_required(VERSION 3.9.2)

project(qeddy)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQURED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

#set(Boost_USE_STATIC_LIBS ON)
#set(Boost_USE_MULTITHREADED ON)
#set(Boost_USE_STATIC_RUNTIME OFF)

#find_package (Boost 1.65.1 COMPONENTS
#    filesystem
#    system
#)

#include_directories(
#    ${Boost_INCLUDE_DIRS}
#)

set(SOURCES main.cpp)

add_executable(qeddy ${SOURCES})

#target_link_libraries(qeddy ${Boost_LIBRARIES})
