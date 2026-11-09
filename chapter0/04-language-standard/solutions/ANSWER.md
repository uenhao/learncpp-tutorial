# 练习答案：warning_hunt 警告清单

`g++ -std=c++20 -Wall -Wextra -c warning_hunt.cpp` 产生的警告：

| # | 警告 | 原因 | 修复 |
|---|------|------|------|
| 1 | `warning: unused variable 'unused'` | 定义了但从未使用 | 删除；若刻意保留，写 `[[maybe_unused]] int unused{42};` |
| 2 | `warning: implicit conversion from 'double' to 'int'` | `int initList{3.5}` 花括号初始化禁止窄化，这里产生 `-Wconversion` 级别的提示；写 `int x = 3.5;` 则静默截断为 3 | 改成 `int initList{3};` |
| 3 | `warning: control reaches end of non-void function` | `unfinished` 在 `x <= 0` 时没有返回值 → **未定义行为** | 末尾补 `return 0;` |

关键认识：

- **警告 3 对应的是真正的 bug**（UB），不带警告编译时完全看不到。这就是"不要忽略警告"的原因。
- 花括号初始化 `{}` 会拒绝窄化转换，比 `=` 更安全（第 1 章 1.4 详细展开）。
- `-Werror` 把警告升级为错误，适合 CI/团队协作强制执行。
