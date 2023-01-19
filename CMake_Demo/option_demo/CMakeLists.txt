#Cmake 最低版本要求
cmake_minimum_required(VERSION 3.16)
 
#项目名称
project(CMakeExp)
 
message(STATUS "CMakeExpMaster.") 
#set(TEST_OPTION OFF)
 
option(TEST_OPTION "test opiton" ON)

message(STATUS "=====: ${TEST_OPTION}")
message(STATUS "***** ${ABC}")