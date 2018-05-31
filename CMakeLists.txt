cmake_minimum_required(VERSION 2.8.9)
project (cyberfilms-graph)
set (CMAKE_CXX_STANDARD 11)

add_executable(main "main.cpp")

include(Graph/General/CMakeLists.txt)
include(Graph/Djikstra/CMakeLists.txt)
