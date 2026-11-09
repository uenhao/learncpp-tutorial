# 0.6–0.7 安装 IDE 与编译第一个程序

📖 原文：[0.6 Installing an IDE](https://www.learncpp.com/cpp-tutorial/installing-an-integrated-development-environment-ide/) · [0.7 Compiling your first program](https://www.learncpp.com/cpp-tutorial/compiling-your-first-program/)

## 检查你的环境

```bash
g++ --version      # 编译器版本
cmake --version    # 构建系统（本仓库已配置）
gdb --version      # 调试器（F5 调试用）
```

本仓库约定：VS Code + C/C++ 扩展 + CMake Tools 扩展；命令行兜底用 g++。

## 编译第一个程序

示例 `first_program.cpp` 是最小可运行程序。三种方式：

```bash
# 方式一：CMake（推荐，仓库根目录执行）
cmake -S . -B build -DCMAKE_BUILD_TYPE=Debug
cmake --build build --target first_program
./build/chapter0/02-compiler-linker-libraries/first_program

# 方式二：单文件直编
g++ -std=c++20 -Wall -Wextra -o first first_program.cpp && ./first

# 方式三：VS Code —— 打开文件后按 F7（CMake Tools: Build），F5 调试
```

**常见报错**（对应原文 0.8）：

| 报错 | 原因 |
|------|------|
| `g++: error: no such file or directory` | 文件名/路径打错 |
| `'cout' was not declared in this scope` | 忘了 `#include <iostream>` |
| `'main' must return 'int'` | main 的返回类型写错 |

## 练习

`exercises/` 中给出一个**故意带错误**的程序，要求根据报错信息修复它。
