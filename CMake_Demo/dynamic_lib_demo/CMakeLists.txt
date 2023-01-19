cmake_minimum_required(VERSION 3.16) # cmake 版本限制
project(dynamic_lib_demo) # 项目名

set(CMAKE_CXX_STANDARD 14) #cpp 版本

include_directories(${CMAKE_SOURCE_DIR}/include) # 头文件搜索路径
link_directories(${CMAKE_SOURCE_DIR}/lib) # 链接库的搜索路径
set(LIBRARY_OUTPUT_PATH  ${CMAKE_SOURCE_DIR}/lib) # 设定动态库的存放路径 --> 默认放到build下
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/demo) # 可执行文件存放路径

file(GLOB so_file src/*.cpp) # 用一个变量来表示 很多文件
message(STATUS "so_file_path : ${so_file}") # 打印
add_library(hello_dynamic SHARED ${so_file}) # 把 so_file 表示的所有文件都编译成动态库 --> libhello_dynamic.so
# add_library(hello_dynamic STATIC ${so_file}) # 把 so_file 表示的所有文件都编译成动态库 --> libhello_dynamic.so

add_executable(main.bin demo/main.cpp) # 编译成可执行文件
add_executable(main_1.bin demo/main_1.cpp) # 编译成可执行文件
# add_executable(main.bin demo/main_3.cpp) # 编译成可执行文件
target_link_libraries(main.bin PRIVATE hello_dynamic) # 将动态库链接到可执行文件
target_link_libraries(main_1.bin PRIVATE hello_dynamic) # 将动态库链接到可执行文件
