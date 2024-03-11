cmake_minimum_required(VERSION 3.0)
project(web-app)

set(HTTPLIB_INCLUDE_DIR "${CMAKE_SOURCE_DIR}/cpp-httplib-master")

file(GLOB SOURCES "*.cpp")

add_executable(web-app ${SOURCES})

target_compile_features(web-app PUBLIC cxx_std_11)

target_include_directories(web-app PUBLIC ${HTTPLIB_INCLUDE_DIR})

target_link_libraries(web-app PRIVATE httplib::httplib)
