# 2.10 预处理器简介

📖 原文：[Introduction to the preprocessor](https://www.learncpp.com/cpp-tutorial/introduction-to-the-preprocessor/)

## 预处理器做什么

编译**之前**对源码做文本级处理，只认以 `#` 开头的**指令**（每条一行）。

```mermaid
graph LR
    A[main.cpp] --> B[预处理器<br># 指令] --> C[翻译单元] --> D[编译器]
```

## `#include`

把目标文件的**内容整体拷贝粘贴**到指令处：

- `#include <iostream>`：尖括号 → 系统库目录；
- `#include "myheader.h"`：引号 → 先找当前目录。

## `#define` 宏（对象式宏）

```cpp
#define MAX_STUDENTS 30   // 文本替换 MAX_STUDENTS -> 30
```

**现代 C++ 尽量不用宏做常量**（无类型、无作用域、调试困难），用 `constexpr` 变量替代（第 5 章）。宏的时代角色只剩**头文件保护**（2.12）和少量条件编译。

## `#if 0 ... #endif`

快速"注释掉"大段代码的惯用法（仍优于注释嵌套）。

## 示例与练习

示例展示宏展开与 `#if 0`；练习预测宏替换结果。
