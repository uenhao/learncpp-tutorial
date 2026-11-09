# 1.4 赋值与初始化

📖 原文：[Variable assignment and initialization](https://www.learncpp.com/cpp-tutorial/variable-assignment-and-initialization/)

## 初始化 vs 赋值

- **初始化**：对象**创建时**给它初始值，一生只有一次。
- **赋值**：对象创建**之后**覆盖当前值，可进行任意次。

## 三种初始化形式

```cpp
int a = 5;    // 拷贝初始化（copy initialization）
int b(5);     // 直接初始化（direct initialization）
int c{ 5 };   // 列表初始化（list / uniform initialization）★推荐
```

**推荐使用花括号 `{}` 初始化**，因为：

1. 对所有类型统一适用（类、数组等都可用）；
2. **禁止窄化转换**（narrowing conversion）：

```cpp
int x = 3.5;   // OK（但静默截断成 3 —— 危险！）
int y{ 3.5 };  // 编译错误：double → int 窄化被拒绝 ★
```

## 默认初始化的陷阱

```cpp
int x;   // 未初始化！x 里是垃圾值，读取它是未定义行为（见 1.6）
```

**最佳实践**：定义变量时**总是初始化**。

## 练习

`exercises/init_styles.cpp`：体验三种初始化与窄化转换报错。
