# 4.2 整数类型与溢出（4.4–4.6）

📖 原文：[4.4](https://www.learncpp.com/cpp-tutorial/signed-integers/) · [4.5](https://www.learncpp.com/cpp-tutorial/unsigned-integers-and-why-to-avoid-them/) · [4.6](https://www.learncpp.com/cpp-tutorial/fixed-width-integers-and-size-t/)

- 4 种整数：short/int/long/long long；默认有符号
- n 位有符号范围：−2^(n−1) 到 2^(n−1)−1（补码，C++20 强制）
- **有符号溢出 = UB**（原文作者机器上 2^31−1 + 1 → −2^31，但那是表现不是保证）
- 定宽整数 <cstdint>：int32_t/int64_t/size_t；8 位定宽常被当 char 处理
- 数字分隔符：2'147'483'647（C++14）

## 练习
exercises/range_predict.cpp——先笔算各类型边界，再运行对照。
