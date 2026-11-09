# 3.9 调试器：调用栈

📖 原文：[The call stack](https://www.learncpp.com/cpp-tutorial/using-an-integrated-debugger-the-call-stack/)

CALL STACK 面板（调试时左侧）：从下往上读 = 调用顺序；栈顶 = 当前函数。
栈条目行号：栈顶 = 下一条执行语句；其余 = 返回后要执行的语句。
返回即弹栈 → 局部变量销毁（2.5 课机制的底层实现）。

## 动手
callstack_demo.cpp：在 a() 打断点，F5 → 观察 CALL STACK = a → main；
crash_trace/exercises：崩溃程序用调用栈看崩溃链（真实排障第一技能）。
