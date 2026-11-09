# 4.1 数据类型基础（4.1+4.3）

📖 原文：[4.1](https://www.learncpp.com/cpp-tutorial/introduction-to-fundamental-data-types/) · [4.3](https://www.learncpp.com/cpp-tutorial/object-sizes-and-the-sizeof-operator/)

类型 = 宽度 + 解释规则。比特无意义，解释赋予含义。
`sizeof(type)` / `sizeof(object)` 编译期返回字节数（类型 size_t）。
标准只保证最小尺寸（int ≥ 16 位），实际由实现决定。

## 验证
sizeof_demo.cpp——打印各基本类型宽度，加 unsigned int / long double 观察。
