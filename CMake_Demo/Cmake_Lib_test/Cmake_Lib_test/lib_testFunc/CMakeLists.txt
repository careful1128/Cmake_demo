
#将该目录下所有源文件 添加到 SRC_LIST
aux_source_directory(. SRC_LIST)
#编译到动态库：将SRC_LIST中的源文件编译成动态库--> testFunc
add_library(testFunc_shared SHARED ${SRC_LIST})
#编译到静态库:将SRC_LIST中的源文件编译成静态库--> testFunc
# add_library(testFunc_static STATIC ${SRC_LIST})

# 重新设定库的输出的名称-->testFunc
set_target_properties(testFunc_shared PROPERTIES OUTPUT_NAME "testFunc")
# set_target_properties(testFunc_static PROPERTIES OUTPUT_NAME "testFunc")

#库的输出路径设置
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)

