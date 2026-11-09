# 2.4 函数参数与实参

📖 原文：[Function parameters and arguments](https://www.learncpp.com/cpp-tutorial/introduction-to-function-parameters-and-arguments/)

## 形参 vs 实参

```cpp
int add(int x, int y)   // x、y 是形参（parameter）：函数内的局部变量
//       ^^^ ^^^
add(3, 4);              // 3、4 是实参（argument）：调用时传入的值
```

调用时，**实参的值被拷贝给形参**（按值传递，pass by value）。

## 多个实参

- 实参按位置一一对应：`add(3, 4)` → `x=3, y=4`；
- 数量或类型不匹配会编译错误（或产生有符号/无符号转换警告）；
- 函数应**小而专一**：参数 3~4 个以内，太多就该拆分或用结构体（后续章节）。

## 练习

`exercises/parameters.cpp`：实现带参函数并追踪拷贝过程。
