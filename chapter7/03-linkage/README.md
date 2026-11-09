# 7.3 链接性（7.6–7.8）

📖 原文：[7.6](https://www.learncpp.com/cpp-tutorial/internal-linkage/) · [7.7](https://www.learncpp.com/cpp-tutorial/external-linkage-and-variable-forward-declarations/) · [7.8](https://www.learncpp.com/cpp-tutorial/why-non-const-global-variables-are-evil/)

- internal：static 强制 / const·constexpr 默认——同名互不指涉，不犯 ODR
- external：非 const 全局与函数默认——extern 声明跨文件对接（2.8 课变量版）
- 非 const 全局 = evil（原文）：任何函数可改且不可追踪

## 实验
```bash
g++ -std=c++20 -Wall -Wextra -I. -o demo globals.cpp main.cpp && ./demo
```
## 恶魔案例实验（evil_case/）
见 evil_case/ 目录：体验"全局被暗改"再修复。
