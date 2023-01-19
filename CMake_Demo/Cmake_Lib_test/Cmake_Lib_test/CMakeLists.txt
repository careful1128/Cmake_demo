#版本信息
cmake_minimum_required(VERSION 3.8)

#项目信息,项目的名称是demo，无其它作用
project (---------demo--------) 

#添加编译选项

# add_compile_options(-std = c++11 -Wall)

# 把当前文件夹下的源文件列表存放到SRC_LIST里,但可能会引入不需要的源文件
# aux_source_directory(. SRC_LIST) 

# 自己指定原文件到 变量
# set(SRC_LIST ./main.cpp ./testFunc.cpp)

# 添加多个指定头文件的搜索路径：空格区分
# include_directories(func_0 func_1)

# 添加指定目录下的源文件
# aux_source_directory(func_0 SRC_LIST_0)
# aux_source_directory(func_1 SRC_LIST_1)

# add_executable(demo4 main.cpp ${SRC_LIST_0} ${SRC_LIST_1}) # ${} 为用变量替换

# 正规做法：源文件放到src 目录下，头文件放入到include文件；生成的文件放入build文件；可执行文件放入到bin目录下：
# ELF：executable and linking format 可执行，可关联的文件格式

# **************使用两个CmakeList.txt的情况*****************************
#向当前工程添加源文件子目录: 当执行cmake 时，就会进入src目录下去找src目录下的CMakeList.txt
#掌控全局，使用add_subdirectory来添加要生成的elf文件的源码目录

# add_subdirectory(src) # src 目录下也应该有CMakeLists.txt

# *******************************使用一个CmakeList.txt时********************************
# aux_source_directory(src SRC_LIST)

# include_directories(include)# 头文件包含命令

# add_executable(main2 ${SRC_LIST})

# set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

#***********************************编译成库文件****************************************
# add_subdirectory (lib_testFunc)

#**********************************编译成库文件并应用 **********************************

# 可使用命令行修改 cmake .. -DMYDEBUG = ON (注意多了个D)
option(MYDEBUG "enable debug compilation" OFF) #opthon 的名字； 描述； 值(默认Off)

# 库的源文件--> 添加子目录
add_subdirectory(lib_testFunc) 

# 添加源文件 --> 添加执行的子目录
add_subdirectory(src_for_lib) # 源文件

#设定执行的输出路径
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin) 














