project(show_result)


# 生成动态库
add_library(${PROJECT_NAME}
SHARED
show_result.cpp)

# 包含头文件
target_include_directories(${PROJECT_NAME}
PUBLIC
${Process_dir})

# 链接动态库
target_link_libraries(${PROJECT_NAME}
PUBLIC
process)

target_link_libraries(${PROJECT_NAME}
PUBLIC
easyx)