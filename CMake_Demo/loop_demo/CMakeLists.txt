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
message(STATUS "\n########## BEGIN_TEST_PROCESS_CONTROL")
 
# if example
set(var_3 "camke")
 
if (DEFINED var_1)
    message("defined var_1")
elseif (DEFINED var_2)
    message("defined var_2")
elseif (DEFINED var_3)
    message("defined var_3")
else()
    message("defined nothing")
endif()
 
# endif
 
## foreach example
 
## foreach 方式一：
set(var_list "C++" "JAVA" Python "CMake" 1024)
 
foreach(item ${var_list})
     message("当前变量是：${item}")
endforeach()
 
## foreach 方式二：
set(result 0)
set(end 0)
 
foreach(element RANGE 0 100)
    math(EXPR result "${result} + ${element}")
    if (result LESS 100)
        continue()   ## continue
    endif()
    if (result GREATER 1000)
        set(end ${element})
        break()    ## break
    endif()
endforeach()
 
message("from 0 plus to ${end} is : ${result}\n")
 
## foreach 方式三：
foreach(every RANGE 0 10 2)
    message(STATUS "every = ${every}")
endforeach()
 
## foreach 方式四：
set(X a b c)
foreach(var IN LISTS X)
    message(STATUS "var = ${var}")
endforeach()
 
## foreach 方式五：
set(A a b c)
set(B 3 4 5)
set(C "11 22")
set(D 8;9 10)
set(E "")
foreach(m IN LISTS A B C D E)
    message(STATUS "m = ${m}")
endforeach()
 
## foreach 方式六：
foreach(pair IN ZIP_LISTS A B)
    message(STATUS "pair_0 = ${pair_0}, pair_1 = ${pair_1}")
endforeach()
 
## foreach 方式七：
foreach(first second IN ZIP_LISTS A B)
    message(STATUS "first = ${first}, second = ${second}")
endforeach()
 
## endforeach
 
### while
 
set(var_max 5)
 
while(${var_max} GREATER 0)
    message(${var_max})
    math(EXPR var_max "${var_max} - 1")
endwhile()
 
### endwhile
 
# 打印结束日志
message(STATUS "########## END_TEST_PROCESS_CONTROL\n")