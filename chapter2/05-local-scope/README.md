# 2.5 局部作用域

📖 原文：[Introduction to local scope](https://www.learncpp.com/cpp-tutorial/introduction-to-local-scope/)

## 局部变量

**局部变量（local variable）**：定义在函数（或块）内的变量：

- **作用域（scope）**：从定义处到所在块 `}` 结束；
- **生命周期**：进入定义点创建，离开作用域销毁；
- 作用域外不可见——就像房间里的人出了门就"不存在"。

```cpp
int add(int x, int y)   // x、y 是 add 的局部变量
{
    int sum{ x + y };   // sum 也是
    return sum;
}   // x、y、sum 在这里销毁
```

## 重要规则

1. **同名遮蔽（shadowing）**：内层块可以定义与外层同名的变量，内层优先——**避免使用**，可开 `-Wshadow` 警告；
2. 形参也是局部变量，与函数体内定义的变量同名会报错；
3. 每次函数调用都会**重新创建**自己的局部变量（互不干扰）。

## 练习

`exercises/scope_trace.cpp`：人工追踪变量生命周期，验证输出。
