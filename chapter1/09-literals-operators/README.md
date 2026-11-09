# 1.9 字面量与运算符

📖 原文：[Introduction to literals and operators](https://www.learncpp.com/cpp-tutorial/introduction-to-literals-and-operators/)

## 字面量（literals）

直接写死在代码里的值：

```cpp
42        // 整数字面量
3.14      // 浮点字面量
'A'       // 字符字面量（单引号）
"Hello"   // 字符串字面量（双引号）
true      // 布尔字面量
```

注意 `'A'` 与 `"A"` 类型不同：字符 vs 字符串。

## 运算符（operators）

```cpp
5 + 3     // + 是二元运算符
-5        // 一元负号
x++       // 后缀自增（后续章节）
```

- **二元运算符**：两个操作数（`+ - * / %`）；
- **一元运算符**：一个操作数（`-`、`++` 等）；
- 字面量 + 运算符组成表达式（下一节）。

## 练习

`exercises/literals.cpp`：为不同类型选择正确形式的字面量。
