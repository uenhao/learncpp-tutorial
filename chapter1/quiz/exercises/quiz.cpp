// Chapter 1 quiz. Do all TODOs, compile, run, then compare with
// solutions/quiz.cpp.
//
// Q1: 找错并修复（修复后保留一条注释说明原错在哪）
// Q2: 先笔算预测输出，再运行验证
// Q3: 读入两个整数，输出 和/差/积/商
// Q4: 读入单价与数量，输出总价（只用本章知识）
#include <iostream>

int main()
{
    // ---- Q1: 以下代码有 2 处错误，修复它们 ----
    int x;                 // error 1 related
    std::cout << "x is " << x << '\n'; // error 2 related (depends on your fix)
    int y{ 3.5 };          // <-- 这行也有问题，先编译看报错

    // ---- Q2: 预测输出（写在注释里）再运行 ----
    std::cout << 7 / 2 << '\n';
    std::cout << 7 % 2 << '\n';
    std::cout << 2 + 3 * 4 << '\n';

    // ---- Q3: 读入 a、b，输出四则结果 ----
    // TODO

    // ---- Q4: 读入单价 unitPrice 和数量 quantity，输出总价 ----
    // TODO

    return 0;
}
