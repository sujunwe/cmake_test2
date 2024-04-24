# 指定工程名称
project(planning_main)

# 添加子目录
add_subdirectory(pnc_map)
add_subdirectory(process)
add_subdirectory(show_result)

# 添加可执行文件
add_executable(${PROJECT_NAME} planning_main.cpp)

# 添加头文件
target_include_directories(${PROJECT_NAME}
PUBLIC
${Process_dir}
)

# 添加链接动态库
target_link_libraries(${PROJECT_NAME}
PUBLIC
process)


target_include_directories(${PROJECT_NAME}
PUBLIC
${Show_result_dir}
)

target_link_libraries(${PROJECT_NAME}
PUBLIC
show_result)