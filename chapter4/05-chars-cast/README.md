# 4.5 字符与类型转换（4.11–4.12）

📖 原文：[4.11 Chars](https://www.learncpp.com/cpp-tutorial/chars/) · [4.12 static_cast](https://www.learncpp.com/cpp-tutorial/introduction-to-type-conversion-and-static_cast/)

- char 是 1 字节小整数（ASCII：'0'=48, 'A'=65, 'a'=97）；cout 按字符打印
- char 参与算术 → 提升为 int → 打印整数
- static_cast<T>(v)：显式转换意图声明；转窄化需明确故意
- 整数除法修复：static_cast<double>(a) / b（先转再除，晚转无用）

## 练习
int_div_fix.cpp——把 1.6 课整数除法程序修成浮点除法（两种位置试错）
