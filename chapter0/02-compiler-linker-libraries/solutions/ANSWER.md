# 练习答案：修复 broken_program.cpp

原始代码的 3 个错误与典型报错：

| 错误 | 报错（节选） | 修复 |
|------|-------------|------|
| `...\n"` 行尾缺分号 | `error: expected ';' before 'retrun'` | 补 `;` |
| `retrun` 拼写错误 | `error: 'retrun' was not declared in this scope` | 改为 `return` |
| （连坐）前一行报错导致本行无法解析 | 通常上一条修复后自动消失 | — |

修复后源码见 [broken_program_fixed.cpp](broken_program_fixed.cpp)，输出：

```
Hello, debugger!
```

**读报错的方法**：
1. 只看**第一条**错误，从上往下修；
2. 编译器提示的位置可能比真实错误偏后一行（比如缺分号报在下一行）；
3. 修一条编译一次，增量推进，比一次改一堆再编译高效得多。
