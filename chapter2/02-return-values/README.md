# 2.2 返回值（有返回值的函数）

📖 原文：[Function return values](https://www.learncpp.com/cpp-tutorial/function-return-values-value-returning-functions/)

## 返回值

函数可以把一个值**交还给调用者**：

```cpp
int add(int x, int y)   // int = 返回类型
{
    return x + y;       // return 语句交出值并结束函数
}

int main()
{
    int sum{ add(5, 3) };   // 函数调用表达式 -> 值 8
    std::cout << sum << '\n';
}
```

## 规则

1. **有返回类型的函数必须 return 一个值**（`main` 例外，缺省视为 `return 0`）；
2. `return` 执行后函数立即结束；
3. 函数调用的返回值可以：赋值、打印、嵌进更大的表达式、或丢弃；
4. **`main` 应显式返回 0**（可读性）。

## 返回类型决定用法

```cpp
double divide(double a, double b) { return a / b; }
int    truncated(int a, int b)    { return a / b; }   // 整数除法
```

## 练习

`exercises/return_values.cpp`：写函数 + 修复"忘写 return"的函数。
