cmake_minimum_required(VERSION 3.0)
project(Installation VERSION 1.0)

# 如果想生成静态库，使用下面的语句
# add_library(mymath mymath.cc)
# target_include_directories(mymath PUBLIC ${CMAKE_SOURCE_DIR}/include)

# 如果想生成动态库，使用下面的语句
add_library(mymath SHARED my_math.cpp)
target_include_directories(mymath PRIVATE  ${CMAKE_SOURCE_DIR}/include)
# set_target_properties(mymath PROPERTIES PUBLIC_HEADER ${CMAKE_SOURCE_DIR}/include/my_math.h)

# 生成可执行文件
add_executable(mymathapp my_math.cpp)
target_link_libraries(mymathapp mymath)
target_include_directories(mymathapp PRIVATE ${CMAKE_SOURCE_DIR}/include)

# install(TARGETS MyLib
#         EXPORT MyLibTargets 
#         LIBRARY DESTINATION lib  # 动态库安装路径
#         ARCHIVE DESTINATION lib  # 静态库安装路径
#         RUNTIME DESTINATION bin  # 可执行文件安装路径
#         PUBLIC_HEADER DESTINATION include  # 头文件安装路径
#         )

install(TARGETS mymath mymathapp
        EXPORT MyMathTargets
        LIBRARY DESTINATION /home/elvin/temp/lib
        ARCHIVE DESTINATION /home/elvin/temp/lib
        RUNTIME DESTINATION /home/elvin/temp/bin
        PUBLIC_HEADER DESTINATION /home/elvin/temp/include
        )

# 写入库的版本信息
# include(CMakePackageConfigHelpers)
# write_basic_package_version_file(
#         MyMathConfigVersion.cmake
#         VERSION ${PACKAGE_VERSION}
#         COMPATIBILITY AnyNewerVersion  # 表示该函数库向下兼容
#         )
