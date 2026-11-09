# 3.7 调试器：断点与运行控制

📖 原文：[Running and breakpoints](https://www.learncpp.com/cpp-tutorial/using-an-integrated-debugger-running-and-breakpoints/)

- 断点：行号左侧点击 / F9。**每次经过都停**（vs run to cursor 只停一次）
- F5 = Start（未调试）/ Continue（调试中）
- Jump to Cursor（右键）：跳过/重放代码——不改代码版"注释法"
  ⚠️ 跳转不重置变量状态；不要跳进别的函数

## 动手
breakpoints_demo.cpp：三个 printValue 调用 + 断点，体验三次暂停
exercises/loop_hunt.cpp：10 次循环中某次把 total 改错——断点+Continue 找出是第几次
