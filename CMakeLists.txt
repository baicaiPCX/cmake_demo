cmake_minimum_required(VERSION 2.8)

# 定义项目名，会定义PROJECT_BINARY_DIR和PROJECT_SOURCE_DIR变量，
# PROJECT_BINARY_DIR表示build目录,PROJECT_SOURCE_DIR表示工作目录
project(Demo)

# 设置安装根目录
set(CMAKE_INSTALL_PREFIX ${PROJECT_SOURCE_DIR}/install_dir)

# 添加代码中预编译宏
add_definitions(-D COMPILE_THIS)
# 编译mylib目录下的库
add_subdirectory(mylib)

# 编译可执行文件
add_subdirectory(demo)