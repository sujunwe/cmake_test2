cmake_minimum_required(VERSION 3.29.0)
project(planning
VERSION 0.0.1
DESCRIPTION "a demo of cmake planning"
HOMEPAGE_URL "https://github.com/sujunwe/cmake_test2"
LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 17)

# 设置输出变量, 动态库和可执行文件的输出位置
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)
set(Process_dir ${CMAKE_SOURCE_DIR}/src/process)
set(Pnc_map_dir ${CMAKE_SOURCE_DIR}/src/pnc_map)
set(Show_result_dir ${CMAKE_SOURCE_DIR}/src/show_result)

# 添加三方库位置
set(EIGEN3_INCLUDE_DIR "C:\\MyPrograms\\eigen-3.4.0")
list(APPEND CMAKE_MODULE_PATH "${EIGEN3_INCLUDE_DIR}/cmake")
message("CMAKE_MODULE_PATH = ${CMAKE_MODULE_PATH}") # 打印信息

# find_package(Eigen3 REQUIRED)
# 查找依赖，可以指定版本
find_package(Eigen3 3.4 REQUIRED)
if(TARGET Eigen3::Eigen)
message(STATUS "****** Eigen3 3.4 found in ${EIGEN3_INCLUDE_DIR} ******")
endif()


# 添加子目录，寻找子目录CMakeLists
# 子目录也可以使用上面的输出变量
add_subdirectory(src)