# 4.3 浮点数与布尔（4.7–4.9）

📖 原文：[4.7](https://www.learncpp.com/cpp-tutorial/introduction-to-scientific-notation/) · [4.8](https://www.learncpp.com/cpp-tutorial/floating-point-numbers/) · [4.9](https://www.learncpp.com/cpp-tutorial/boolean-values/)

- 科学计数法：1.2e4；有效数字决定精度
- float(4B)/double(8B)/long double(避开)；默认用 double；字面量带小数点
- 浮点两大坑：多数小数无法精确存（勿用 == 比较）；x/0.0 → inf/NaN（定义良好但会传播）
- bool：true=1/false=0；默认打印 0/1，std::boolalpha 打 true/false

## 练习
0.1+0.2 == 0.3 的结果！inf/NaN 现象。boolalpha 前后对比。
