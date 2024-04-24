# 指定工程名称
project(pnc_map_test)

# 添加可执行文件
add_executable(${PROJECT_NAME} pnc_map_test.cpp)

target_include_directories(${PROJECT_NAME}
PUBLIC
${Pnc_map_dir})

target_link_libraries(${PROJECT_NAME}
PUBLIC
pnc_map)

add_test(
    NAME pnc_map_info_test
    COMMAND ${PROJECT_NAME}
)