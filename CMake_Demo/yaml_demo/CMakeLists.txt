cmake_minimum_required(VERSION 3.10)

Project(yaml_demo)

add_subdirectory(${CMAKE_SOURCE_DIR}/third_party/yaml_cpp)

# find_package(//)

add_executable(main ${CMAKE_SOURCE_DIR}/main.cpp)

target_include_directories(main PUBLIC ${CMAKE_SOURCE_DIR}/third_party/yaml_cpp/include) #找到声明
message(STATUS "======= include address ${CMAKE_SOURCE_DIR}/third_party/yaml_cpp/include")
target_link_directories(main PUBLIC ${CMAKE_BINARY_DIR}/third_party/yaml_cpp)

target_link_libraries(main yaml-cpp) # 找到具体的实现

# SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
# SET(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

# find_package(yaml-cpp REQUIRED)

# include_directories(${YAML_CPP_INCLUDE_DIR})
# add_executable(${PROJECT_NAME} ${PROJECT_SOURCE_DIR}/src/yaml-test.cpp)
# target_link_libraries(${PROJECT_NAME} yaml-cpp)
