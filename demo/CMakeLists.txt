
# 设置生成的可执行文件输出目录
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)

# 生成可执行文件
add_executable(Demo ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp)

# 链接
target_link_libraries(Demo mylib)
