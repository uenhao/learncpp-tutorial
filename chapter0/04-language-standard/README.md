# 0.12–0.13 语言标准与编译器警告

📖 原文：[0.12 Choosing a language standard](https://www.learncpp.com/cpp-tutorial/configuring-your-compiler-choosing-a-language-standard/) · [0.13 What language standard is my compiler using?](https://www.learncpp.com/cpp-tutorial/what-language-standard-is-my-compiler-using/) · [0.11 Warning and error levels](https://www.learncpp.com/cpp-tutorial/configuring-your-compiler-warning-and-error-levels/)

## 语言标准

C++ 大约每 3 年一个新标准：C++98/03 → C++11 → C++14 → C++17 → C++20 → C++23 → …

- 本教程使用 **C++20**（learncpp 当前推荐）。
- 编译时通过 `-std=c++20` 显式指定，避免依赖编译器默认值。

```bash
g++ -std=c++20 -Wall -Wextra -o prog main.cpp
```

## 查询编译器支持的标准

```bash
g++ -dM -E - < /dev/null | grep __cplusplus
# 201709L = C++17 默认（很多发行版如此），手动加 -std 才是 C++20
```

或在代码里用标准宏（见示例 `check_standard.cpp`）。

## 警告级别

| GCC/Clang 选项 | 作用 |
|---|---|
| `-Wall` | 开启大部分常用警告 |
| `-Wextra` | 再加一些额外警告 |
| `-Wpedantic` | 拒绝编译器私有扩展，保证标准兼容 |
| `-Werror` | 把警告当错误（团队项目常用） |

**最佳实践**：始终开 `-Wall -Wextra`，**不要忽略警告**——警告往往就是 bug。本项目 CMake 已全局加上这三项。

## 示例

- `check_standard.cpp`：打印 `__cplusplus`，判断当前编译标准。
- `exercises/warning_hunt.cpp`：一段埋了多个警告的代码，要求开着 `-Wall -Wextra` 找出它们。

## 练习

打开 `exercises/warning_hunt.cpp`，按注释操作。
