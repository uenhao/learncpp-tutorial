# 3.3 定位策略：代码审查与 hi-lo 收敛

📖 原文：[A strategy for debugging](https://www.learncpp.com/cpp-tutorial/a-strategy-for-debugging/)

两条定位路径：代码审查（受坏假设盲区限制）/ 运行观察（重现问题 → 收集线索 → 收敛）。
hi-lo 判读：证明"问题还没发生"→ 往后找；观察到"已经错了"→ 往前找。

## 练习
`exercises/hilo_hunt.cpp`——用两次插值观察把包围圈收敛到一行。
