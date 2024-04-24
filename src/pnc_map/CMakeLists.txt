project(pnc_map)


# 生成动态库
add_library(${PROJECT_NAME}
SHARED
pnc_map.cpp)
