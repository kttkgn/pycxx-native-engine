# pycxx-native-engine (pybind11) 
混合 C + C++ 架构，使用 **pybind11** 作为 Python 绑定层。
此示例包含最小可工作的工程结构、C 算法、C++ 封装、pybind11 绑定以及 CMake 构建脚本。

## 依赖
- CMake >= 3.14
- a C/C++ 编译器 (gcc/clang/Visual Studio)
- Python 3.8+
- pybind11 (安装方法: `pip install pybind11` — 安装后会提供 CMake 的 pybind11Config)
- (可选) venv

## 快速构建（Linux / macOS）
```bash
# 在项目根目录执行
python3 -m venv .venv
source .venv/bin/activate
pip install --upgrade pip
pip install pybind11  # 确保 pybind11 可用于 CMake
mkdir build && cd build
cmake ..
cmake --build . --config Release
# 生成的扩展模块会放在 build/ 目录下，例: pycxx_native_engine.*.so
```

## Windows (使用 Visual Studio 的开发者命令提示符)
```powershell
python -m venv .venv
.\.venv\Scripts\activate
pip install pybind11
mkdir build; cd build
cmake .. -A x64
cmake --build . --config Release
```

## 目录结构（此仓库）
- csrc/: 纯 C 算法实现
- cppsrc/: C++ 封装层（调用 C）
- bindings/: pybind11 绑定实现（C++）
- examples/: Python 使用示例
- CMakeLists.txt：顶层构建脚本（使用 find_package(pybind11 REQUIRED)）

---
