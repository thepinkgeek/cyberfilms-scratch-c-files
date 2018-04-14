cmake_minimum_required(VERSION 2.8.9)
project (cyberfilms-graph)
set (CMAKE_CXX_STANDARD 11)
include_directories(headers)

file(GLOB SOURCES "sources/*.cpp")
#set(SOURCES "sources/Node.cpp" "sources/main.cpp")

add_executable(main ${SOURCES})
