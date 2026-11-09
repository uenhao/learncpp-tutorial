# 3.1 语法错误与语义错误

📖 原文：[Syntax and semantic errors](https://www.learncpp.com/cpp-tutorial/syntax-and-semantic-errors/)

三类错误层级：
1. 编译期（语法错误 + 部分语义错误如类型不匹配）——编译器报错
2. 链接期（undefined reference）——链接器报错（0.1 课）
3. 运行时语义错误——**什么都不报**：崩溃或静默给出错误结果（本章主角）

## 亲手体验

```bash
# 语法错误集大成：数一数第一条报错后跟着几条"连坐"
g++ -std=c++20 -Wall -Wextra -o demo 01-syntax-semantic/semantic_levels.cpp 2>&1 | head -20
```
