# 2.8 多文件程序

📖 原文：[Programs with multiple code files](https://www.learncpp.com/cpp-tutorial/programs-with-multiple-code-files/)

## 为什么拆文件

单文件超过几百行后，查找与协作都变难。**每个功能一个 `.cpp`** 是 C++ 的常态：

```
main.cpp    —— main 函数
add.cpp     —— add 的定义
math_utils.cpp —— 一组数学工具
```

## 跨文件调用 = 前向声明 + 链接

```cpp
// main.cpp
int add(int x, int y);   // 前向声明

int main() { return add(1, 2); }

// add.cpp
int add(int x, int y) { return x + y; }  // 定义（定义在另一文件）
```

编译各自独立，链接器把 `main.cpp` 里的 `add` 调用接到 `add.o` 的定义上。

## 构建命令（第 0 章回顾）

```bash
g++ -std=c++20 -Wall -Wextra -o prog main.cpp add.cpp
```

**本节的示例由 main.cpp + add.cpp 组成**，CMake 已把它们编成一个可执行文件。

## 练习

`exercises/`：完成三文件程序（main + 函数文件），并体验漏加文件的链接错误。
