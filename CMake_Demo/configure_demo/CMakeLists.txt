cmake_minimum_required(VERSION 3.10)
 
# set the project name and version
project(Tutorial VERSION 2.3)
 
set(Tutorial_Date 20210713)
 
# add the executable
add_executable(Tutorial main.cpp)
 
# configure a header file to pass some of the CMake settings
# to the source code
configure_file(tutorial_config.h.in TutorialConfig.h)
 
# Since the configured file will be written into the binary tree
# we must add that directory to the list of paths to search for include files
target_include_directories(Tutorial PUBLIC
                           "${PROJECT_BINARY_DIR}"
                           )