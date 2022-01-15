
# 设置当前目标文件的输出路径
set(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)

# 设置cmake编译开关
option(USE_INSTALL "Generate a static lib and shared lib from mylib directory,and install to install_dir." OFF)

# 文件操作
file(GLOB SRCS ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)
file(GLOB SRCS_INCLUDE  ${CMAKE_CURRENT_SOURCE_DIR}/*.h)

if(NOT USE_INSTALL) # 只编译成静态库
    add_library(mylib ${SRCS})
else() # 同时编译成静态库和动态库
    
    add_library(mylib ${SRCS})
    set_target_properties(mylib PROPERTIES OUTPUT_NAME "mylib")
    set_target_properties(mylib PROPERTIES CLEAN_DIRECT_OUTPUT 1)

    add_library(mylib_shared SHARED ${SRCS})
    set_target_properties(mylib_shared PROPERTIES OUTPUT_NAME "mylib")
    set_target_properties(mylib_shared PROPERTIES CLEAN_DIRECT_OUTPUT 1)

    # 安装
    install(TARGETS mylib mylib_shared DESTINATION mylib/lib)
    install(FILES ${SRCS_INCLUDE} DESTINATION mylib/include)
endif(NOT USE_INSTALL)



