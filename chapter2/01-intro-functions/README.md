# 2.1 函数简介

📖 原文：[Introduction to functions](https://www.learncpp.com/cpp-tutorial/introduction-to-functions/)

## 什么是函数

**函数**是被命名的、可复用的语句序列。前面一直写的 `main` 就是函数，只不过它由操作系统调用。

```cpp
返回类型 函数名(参数列表)
{
    语句...
}
```

```cpp
void doPrint()      // 无参数、无返回值
{
    std::cout << "In doPrint()\n";
}

int main()
{
    doPrint();      // 函数调用
    return 0;
}
```

## 关键概念

- **函数调用**：`函数名()` 让 CPU 跳去执行函数体，执行完**回到调用处**继续；
- **嵌套调用**：函数里可以调用其他函数，形成调用链；
- `main` 不能被程序内调用或提前声明（它是特殊函数）。

## 练习

`exercises/call_chain.cpp`：编写自己的函数并观察调用顺序。
