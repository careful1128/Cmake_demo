cmake_minimum_required(VERSION 2.8)
project( test1 )

set(OpenCV_DIR  /home/elvin/Downloads/opencv-build/build) 
find_package(OpenCV REQUIRED)

message(STATUS "*************** opencv libs : ${OpenCV_LIBS}")

include_directories(${OpenCV_INCLUDE_DIRS})

message(STATUS "=============== opencv include dirs : ${OpenCV_INCLUDE_DIRS}")
add_executable( test1 main.cpp )
target_link_libraries( test1 ${OpenCV_LIBS} ) 

