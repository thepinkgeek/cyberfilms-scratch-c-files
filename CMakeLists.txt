cmake_minimum_required(VERSION 2.8.9)
project (cyberfilms-graph)
set (CMAKE_CXX_STANDARD 11)

add_executable(cyberfilm "main.cpp")

include(GraphGeneral/CMakeLists.txt)
include(Djikstra/CMakeLists.txt)

