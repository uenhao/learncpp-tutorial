# 3.6 调试器：单步执行

📖 原文：[Using an integrated debugger: Stepping](https://www.learncpp.com/cpp-tutorial/using-an-integrated-debugger-stepping/)

VS Code（本项目已配置）：
- F5 启动调试 / 继续运行
- F10 = Step over（执行整行，函数整体跑完）
- F11 = Step into（钻进函数体）
- Shift+F11 = Step out（执行完当前函数剩余部分）

⚠️ 必须 Debug 构建构建变体（CMake: [Debug]）。

## 动手
1. F5 启动 stepping_demo.cpp，停在 main；F11 钻进 printValue → Shift+F11 出来
2. exercises/step_hunt.cpp：**禁止打印**，纯单步定位一个运算符 bug
