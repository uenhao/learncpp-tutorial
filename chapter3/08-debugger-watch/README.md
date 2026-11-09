# 3.8 调试器：监视变量

📖 原文：[Watching variables](https://www.learncpp.com/cpp-tutorial/using-an-integrated-debugger-watching-variables/)

- 悬停变量 = 一次性查看
- WATCH 窗口（调试面板 + 号）：持续跟踪变量/表达式
- VARIABLES/LOCAL 区：当前函数所有局部变量自动列出

⚠️ 走出作用域监视项失效（变量随栈层销毁——2.2/3.9 课机制）。

## 练习
exercises/watch_hunt.cpp：全程禁打印，用 Local 区 + WATCH 定位"值被中途污染"的求和。
