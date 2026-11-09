# 3.4 基础调试战术

📖 原文：[Basic debugging tactics](https://www.learncpp.com/cpp-tutorial/basic-debugging-tactics/)

三战术：① 注释掉代码 ② 函数入口打印流程（用 std::cerr！）③ 打印值。
cerr vs cout：cerr 无缓冲，崩溃时不丢线索。调试语句故意不缩进便于删除。

## 练习（只许用 cerr 打印法，禁用调试器）
- `exercises/missing_parens.cpp`——函数名后漏括号（打印 1 而不是 4）
- `exercises/literal_arg.cpp`——实参误写字面量（原文 add(x,5) 案例）
