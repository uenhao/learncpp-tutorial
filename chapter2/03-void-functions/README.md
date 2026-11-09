# 2.3 void 函数（无返回值）

📖 原文：[Void functions](https://www.learncpp.com/cpp-tutorial/void-functions-non-value-returning-functions/)

## void：不返回值

```cpp
void printSomething()
{
    std::cout << "Hi\n";
    // 无 return 语句也可以；函数在右花括号处结束
}

void earlyExit(int x)
{
    if (x < 0)
        return;          // void 函数的 return 不带值，用于提前结束
    std::cout << x << '\n';
}
```

## 规则与陷阱

- `void` 函数**不能**把调用结果赋值/使用：`int x{ printSomething(); }` ❌；
- `return;`（无值）可提前退出；
- 返回类型写在函数名**前面**，声明"这个函数产出什么类型的值"。

## 练习

`exercises/void_practice.cpp`：写 void 函数 + 修复误用返回值的代码。
