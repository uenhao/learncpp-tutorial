# 1.5 iostream：cout、cin 与 endl

📖 原文：[Introduction to iostream](https://www.learncpp.com/cpp-tutorial/introduction-to-iostream-cout-cin-and-endl/)

## I/O 流库

```cpp
#include <iostream>   // 输入输出流库
```

- `std::cout`：**输出**到控制台，用 `<<` 把数据"送入"流；
- `std::cin`：**输入**，用 `>>` 把键盘输入"提取"到变量；
- `std::endl`：换行**并刷新**输出缓冲区。

## 输出

```cpp
std::cout << "Hello!" << '\n';          // 链式输出
std::cout << "x = " << x << '\n';       // 混合文本与变量
```

`'\n'` vs `std::endl`：两者都换行，但 `std::endl` 额外**刷新缓冲区**（立即显示）。频繁用它有性能开销。**日常用 `'\n'`**，交互提示确需立即显示时才用 `std::endl`。

## 输入

```cpp
int x{};
std::cin >> x;   // 读取一个整数（以空白分隔）
```

## 练习

`exercises/greet.cpp`：编写读入姓名和年龄、再输出的交互程序。
