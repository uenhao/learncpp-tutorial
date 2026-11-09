# 1.1 语句与程序结构

📖 原文：[Statements and the structure of a program](https://www.learncpp.com/cpp-tutorial/statements-and-the-structure-of-a-program/)

## 语句（statement）

C++ 程序由一条条**语句**组成，大多数语句以分号 `;` 结尾，按书写顺序依次执行。

```cpp
int x;        // 声明语句
x = 5;        // 赋值语句
return 0;     // 返回语句
```

## 函数与 main

**函数**是一组顺序执行的语句的集合，最小的 C++ 程序只有一个 `main` 函数：

```cpp
int main()
{
    return 0;   // 0 表示程序成功
}
```

- 操作系统从 `main` 开始执行程序；
- `main` 的返回值是**状态码**：`0` 成功，非零（常为 `EXIT_FAILURE`）失败；
- 函数体写在花括号 `{}` 内。

## Hello world 与编译

```cpp
#include <iostream>

int main()
{
    std::cout << "Hello world!\n";
    return 0;
}
```

```bash
g++ -std=c++20 -Wall -Wextra -o hello hello.cpp
./hello
```

## 练习

`exercises/first_touch.cpp`：亲手写第一个程序，体验"语句按顺序执行"。
