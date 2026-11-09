# 1.10 表达式简介

📖 原文：[Introduction to expressions](https://www.learncpp.com/cpp-tutorial/introduction-to-expressions/)

## 表达式（expression）

**表达式 = 字面量、变量、运算符的组合，求值后产生一个结果。**

```cpp
2 + 3        // 表达式，结果是 5
x            // 最简单的表达式，结果是 x 的值
x * y + 1    // 复合表达式
```

表达式产生**值**；语句是**动作**。`x + y;` 其实也是一条（无用的）表达式语句。

## 求值顺序与优先级

- 运算符有**优先级**（`* / %` 高于 `+ -`）；
- 同级从左到右结合：`10 - 4 - 3` 等于 `(10 - 4) - 3 = 3`；
- 拿不准就**加括号**，括号零成本且自文档化。

## 副作用

```cpp
int x{ 5 };
x = x + 1;   // 求值之外还修改了 x —— 副作用
```

## 练习

`exercises/expression_quiz.cpp`：先笔算表达式结果，再运行验证。
