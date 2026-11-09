# 0.4–0.5 C++ 开发流程：编译器、链接器与库

📖 原文：[0.4 Introduction to C++ development](https://www.learncpp.com/cpp-tutorial/introduction-to-cpp-development/) · [0.5 Compiler, linker, libraries](https://www.learncpp.com/cpp-tutorial/introduction-to-the-compiler-linker-and-libraries/)

## 编写一个 C++ 程序的步骤

```mermaid
graph LR
    A[编写源代码<br>.cpp] --> B[预处理器<br>处理 # 指令]
    B --> C[编译器<br>.cpp → .o 机器码]
    C --> D[链接器<br>.o + 库 → 可执行文件]
    D --> E[运行]
```

1. **编写源代码**：用编辑器写出 `.cpp` 文件。
2. **预处理**：`#include`、`#define` 等以 `#` 开头的指令在此阶段处理（见第 2 章 2.10）。
3. **编译**：编译器把每个 `.cpp`（翻译单元）翻译成机器码，产出**目标文件** `.o`/`.obj`。此时单个文件语法错误会在这里报出。
4. **链接**：链接器把所有目标文件 + **库**（如标准库 `libstdc++`）拼成一个可执行文件。跨文件调用的函数在这里"对号入座"；找不到定义会报 *undefined reference*。
5. **运行**：操作系统加载执行。

## 关键概念

| 术语 | 含义 |
|------|------|
| 翻译单元 | 一个 `.cpp` 经预处理后的整体，是编译的基本单位 |
| 目标文件 `.o` | 单个翻译单元编译后的机器码，还不能独立运行 |
| 链接器错误 | 函数被调用但没有定义（拼写不一致、漏了文件） |
| 编译器错误 | 语法或类型问题，**永远优先修编译错误** |
| 运行时错误 | 程序跑起来才暴露的问题 |

## 运行示例

本节示例演示"两个翻译单元 + 链接"的过程：

```bash
g++ -std=c++20 -Wall -Wextra -c main.cpp -o main.o
g++ -std=c++20 -Wall -Wextra -c add.cpp -o add.o
g++ main.o add.o -o step_by_step
./step_by_step
```

也可一行完成（g++ 自动执行 编译→链接 全流程）：

```bash
g++ -std=c++20 -Wall -Wextra -o step_by_step main.cpp add.cpp
```

对比 `exercises/` 中的练习：故意制造一个**链接错误**，观察报错信息。
