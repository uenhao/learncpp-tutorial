# 1.3 对象与变量简介

📖 原文：[Introduction to objects and variables](https://www.learncpp.com/cpp-tutorial/introduction-to-objects-and-variables/)

## 对象与变量

- **对象（object）**：一块能存储值的内存。
- **变量（variable）**：有名字的对象。

```cpp
int x;           // 定义变量 x，类型 int
x = 5;           // 赋值
```

定义变量的通用形式：`类型 名字;`

## 变量三要素

| 概念 | 含义 |
|------|------|
| **类型** | 决定对象的大小、能表示的值、支持的操作 |
| **名字（标识符）** | 代码中引用该对象的方式 |
| **值** | 对象里实际存放的数据 |

## 关键规则

- **定义 vs 声明**：定义分配存储；变量定义同时完成声明。
- **作用域**：变量从定义处可见，到所在花括号块结束为止。
- 同一作用域内同名变量**不能重复定义**。

## 练习

`exercises/variable_basics.cpp`：定义变量、赋值、观察作用域规则。
