# 2.7 前向声明与定义

📖 原文：[Forward declarations and definitions](https://www.learncpp.com/cpp-tutorial/forward-declarations/)

## 问题：编译器自上而下工作

```cpp
int main()
{
    add(3, 4);   // ❌ 编译错误：此时编译器还不知道 add
    ...
}

int add(int x, int y) { return x + y; }
```

## 解决：前向声明（forward declaration）

在**使用之前**告诉编译器"存在这个函数"，**分号结尾、无函数体**：

```cpp
int add(int x, int y);   // 声明（declaration）

int main()
{
    add(3, 4);           // ✅ OK
}

int add(int x, int y)    // 定义（definition）：声明 + 函数体
{
    return x + y;
}
```

## 声明 vs 定义

| | 声明 | 定义 |
|---|---|---|
| 内容 | 名字 + 类型签名 | 名字 + 函数体（实现） |
| 次数 | 同一文件可重复 | **整个程序只能一次**（One Definition Rule） |
| 分配代码？ | 否 | 是 |

## 练习

`exercises/order_fix.cpp`：用前向声明修复"调用先于定义"。
