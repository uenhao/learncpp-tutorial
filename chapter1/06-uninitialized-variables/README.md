# 1.6 未初始化变量与未定义行为

📖 原文：[Uninitialized variables and undefined behavior](https://www.learncpp.com/cpp-tutorial/uninitialized-variables-and-undefined-behavior/)

## 未初始化 = 危险

```cpp
int x;                  // 未初始化，x 里是垃圾值
std::cout << x;         // 未定义行为（UB）！
```

**未定义行为（Undefined Behavior, UB）**：标准未规定结果。可能表现为：输出随机值、看似正常、崩溃、甚至被编译器整体优化掉。**UB 的危害在于它不保证以任何可预测的方式失败。**

## 哪些变量不会自动初始化

| 类型 | 默认情况 |
|------|----------|
| 函数内的普通局部变量 | **不初始化**（垃圾值） |
| 全局变量 / static 变量 | 零初始化 |
| `std::string` 等类类型 | 自带默认构造（安全） |

## 防御措施

1. **永远在定义时初始化**：`int x{};`（零初始化）或给明确初值；
2. 开编译警告：`-Wall -Wextra` 会报"used but never initialized"；
3. 需要用户输入时，先 `int x{};` 再 `cin >> x`，失败时 x 也是确定的 0。

## 示例与练习

示例 `uninit_demo.cpp` 展示垃圾值（每次运行可能不同）；`exercises/` 修一个 UB 程序。
