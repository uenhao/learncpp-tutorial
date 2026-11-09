# 答案

实际输出：double 21 = 31。单步推演：main → F11 进 triple：21*3 = 63 正确；
返回 main 执行 /2 → 63/2 = 31（整数除法截断）。期望 42。
根因：`/ 2` 应为无除法（double 21 = 42 即 21*2）。`triple(...)/2` 多除了 2。
修复：`int result{ triple(readNumber(n)) * 2 };` → 输出 42。

教训：step into 让你逐函数验证返回值，配合 watch 窗口看形参——3 行代码的
"函数链" bug 无需任何打印即可锁定。
