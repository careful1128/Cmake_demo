cmake_minimum_required(VERSION 3.18)
 
# 设置工程名称
set(PROJECT_NAME KAIZEN)
 
# 设置工程版本号
set(PROJECT_VERSION "1.0.0.10" CACHE STRING "默认版本号")
 
# 工程定义
project(${PROJECT_NAME}
    LANGUAGES CXX C
    VERSION ${PROJECT_VERSION}
)
 
# 打印开始日志
message(STATUS "\n########## BEGIN_TEST_MACRO_VS_FUNCTION")
 
# 定义函数
function(test_func_argument age)
    # 打印ARGN参数值
    message(STATUS "ARGN: ${ARGN}")
    # 打印ARGC参数值
    message(STATUS "ARGC: ${ARGC}")
    # 打印ARGV参数值
    message(STATUS "ARGV: ${ARGV}")
    # 打印ARGV0参数值
    message(STATUS "ARGV0: ${ARGV0}")
    
    # 打印参数个数
    list(LENGTH ARGV argv_len)
    message(STATUS "length of ARGV: ${argv_len}")
    
    # 遍历打印各参数值
    set(i 0)
    while(i LESS ${argv_len})
        list(GET ARGV ${i} argv_value)
        message(STATUS "argv${i}:${argv_value}")
        math(EXPR i "${i} + 1")
    endwhile()
    
    if (ARGV1) # ARGV1 is a true variable
        message(STATUS "ARGV1: ${ARGV1}")
    endif()
    
    if (DEFINED ARGV2) # ARGV2 is a true variable
        message(STATUS "ARGV2: ${ARGV2}")
    endif()
    
    if (ARGC GREATER 2) # ARGC is a true variable
        message(STATUS "ARGC: ${ARGC}")
    endif()
    
    foreach (loop_var IN LISTS ARGN) # ARGN is a true variable
        message(STATUS "var: ${loop_var}")
    endforeach()
endfunction()
 
# 定义宏 在宏中ARGV、ARGV1、ARGV2、ARGC、ARGN都不是真实的变量。
macro(test_macro_argument age)
    # 打印ARGN参数值
    message(STATUS "ARGN: ${ARGN}")
    # 打印ARGC参数值
    message(STATUS "ARGC: ${ARGC}")
    # 打印ARGV参数值
    message(STATUS "ARGV: ${ARGV}")
    # 打印ARGV0参数值
    message(STATUS "ARGV0: ${ARGV0}")
    
    # 打印参数个数
    list(LENGTH ARGV argv_len)
    message(STATUS "length of ARGV: ${argv_len}")
    
    # 遍历打印各参数值
    set(i 0)
    while(i LESS ${argv_len})
        list(GET ARGV ${i} argv_value)
        message(STATUS "argv${i}:${argv_value}")
        math(EXPR i "${i} + 1")
    endwhile()
    
    if (ARGV1) # ARGV1 is not a variable
        message(STATUS "ARGV1: ${ARGV1}")
    endif()
    
    if (DEFINED ARGV2) # ARGV2 is not a variable
        message(STATUS "ARGV2: ${ARGV2}")
    else()
        message(STATUS "not defined ARGV2")
    endif()
    
    if (ARGC GREATER 2) # ARGC is not a variable
        message(STATUS "ARGC: ${ARGC}")
    endif()
    
    foreach (loop_var IN LISTS ARGN) # ARGN is not a variable
        message(STATUS "var: ${loop_var}")
    endforeach()
endmacro()
 
test_func_argument(22 33 44)
message(STATUS "\n")
test_macro_argument(22 33 44)
 
# 打印结束日志
message(STATUS "########## END_TEST_MACRO_VS_FUNCTION\n")