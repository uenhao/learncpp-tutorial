# 3.5 进阶调试战术：条件编译与日志

📖 原文：[More debugging tactics](https://www.learncpp.com/cpp-tutorial/more-debugging-tactics/)

- `#ifdef ENABLE_DEBUG`：一行开关全部调试输出（预处理期整体抹除，零运行时开销）
- 日志库（plog/spdlog）：调试信息落文件、可发给别人远程诊断——选修

## 练习
`conditional_debug.cpp`：注释/取消 `#define ENABLE_DEBUG` 编译两次，
对比输出与可执行文件大小（0.2 课 Debug/Release 差异的近亲）。
