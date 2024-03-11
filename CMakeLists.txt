cmake_minimum_required(VERSION 3.10)
project(Server)

set(CMAKE_CXX_STANDARD 11)

include_directories(cpp-httplib-master)

add_executable(Server main.cpp)

#target_link_libraries(Server libhttplib)
