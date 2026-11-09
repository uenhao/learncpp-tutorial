# 2.11 头文件

📖 原文：[Header files](https://www.learncpp.com/cpp-tutorial/header-files/)

## 头文件解决什么问题

2.8 里跨文件调用要**手抄前向声明**——抄错了签名，编译通过、运行崩坏。头文件把声明集中一处，**一处维护，处处 `#include`**：

```
add.h    —— 声明：int add(int, int);
add.cpp  —— 定义（#include "add.h" 确保声明与定义一致）
main.cpp —— #include "add.h" 后直接调用
```

## 约定

| 文件 | 内容 |
|------|------|
| `.h`/`.hpp` 头文件 | 函数**声明**、类型定义、常量 |
| `.cpp` 源文件 | 函数**定义**（实现） |

- 头文件**不应 #include 相互依赖的实现**，也不定义普通函数体（`inline`/模板除外，后续章节）；
- 源文件**先 include 自己的头文件**，让编译器立刻发现声明/定义不一致。

## 示例与练习

示例 `math_utils/`：`math_utils.h + math_utils.cpp + main.cpp` 三件套；练习改造 `geometry/`。
