# 答案

输入 3 → process(3) → divide(100, 0) → 崩溃。
调试器 CALL STACK（顶→底）：divide → process → main。
点选 divide 帧看局部变量：a=100, b=0 → 除零。
根因：n - 3 可能为 0。修复（本章工具内）：process 里先检查，
n == 3 时返回 0 并提示，或 divide 前加 if (n == 3) 保护。

第 9 章会教 assert/异常；此处只需体会：**崩溃时第一件事看 CALL STACK**。
