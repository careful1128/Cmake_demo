cmake_minimum_required(VERSION 3.10)
project(json_demo)

add_subdirectory(third-party/nlohmann) #


include_directories(json_demo ${nlohmann_INCLUDE})
add_executable(json_demo json_demo.cpp)

