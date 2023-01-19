# 当前路径所有源文件给 SRC_LIST 变量
# aux_source_directory(. SRC_LIST)

# 将头文件的路径包含进来
include_directories(${PROJECT_SOURCE_DIR}/lib_testFunc)

#添加非标准的共享库搜索路径
link_directories(${PROJECT_SOURCE_DIR}/lib)

add_executable(main main.cpp)
add_executable(main2 main2.cpp)

# if (MYDEBUG)
#     add_executable(main2 main2.cpp ) # 添加另一个可执行文件
#     target_link_libraries(main2 testFunc) #进行链接
# else()
#     message(STATUS "Currently is not in debug mode")
# endif()

#把目标文件与库文件进行连接(默认使用动态库）：名字中没有加 .o
target_link_libraries(main testFunc)
target_link_libraries(main2 testFunc)


#设定可执行文件的保存路径：PROJECT_SOURCE_DIR为工程的根路径
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)










