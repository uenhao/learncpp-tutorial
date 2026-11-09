# 1.8 空白与基本格式

📖 原文：[Whitespace and basic formatting](https://www.learncpp.com/cpp-tutorial/whitespace-and-basic-formatting/)

## 什么是空白

空格、制表符 `\t`、换行 `\n` 的统称。**编译器基本忽略空白**——以下两段代码完全等价：

```cpp
int x=5;return 0;   // 合法但可读性差
```

```cpp
int x = 5;
return 0;
```

## 格式化最佳实践

1. **缩进**：函数体、块内语句用 4 空格（或项目统一风格）；
2. **花括号**：`{` 与语句同行或独立成行都可以，**保持一致**；
3. **每条语句一行**；过长的语句可合理折行；
4. 命名规范等交给格式化工具：**clang-format**（本项目可用 `clang-format -i *.cpp`）。

## 例外：字符串字面量不能随意折行

```cpp
std::cout << "Hello
world";        // 编译错误！字符串内不能直接换行
```

## 示例与练习

示例展示"同一程序的两种排版"；练习要求把一段故意挤成一坨的代码格式化。
