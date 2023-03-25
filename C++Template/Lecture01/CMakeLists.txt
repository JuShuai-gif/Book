cmake_minimum_required(VERSION 3.10)

# 设置项目名称
project(MyProject)

# 设置 C++ 标准
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 添加可执行文件
add_executable(MyProject main.cpp)

# 添加头文件路径
#include_directories(include)

# 添加链接库路径
#link_directories(lib)

# 添加链接库
#target_link_libraries(MyProject mylib)