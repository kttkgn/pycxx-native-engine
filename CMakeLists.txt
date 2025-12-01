cmake_minimum_required(VERSION 3.14)
project(pyc_accelerator LANGUAGES C CXX)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

# 查找 pybind11（需要 pip install pybind11，这会提供 pybind11Config.cmake）
find_package(pybind11 REQUIRED)

# 指定扩展模块名为 pyc_accelerator （Python 导入名）
pybind11_add_module(pyc_accelerator
    bindings/bindings.cpp
    cppsrc/wrapper.cpp
    csrc/algo.c
)

target_include_directories(pyc_accelerator PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/csrc
    ${CMAKE_CURRENT_SOURCE_DIR}/cppsrc
)
# 默认输出目录为 build/

