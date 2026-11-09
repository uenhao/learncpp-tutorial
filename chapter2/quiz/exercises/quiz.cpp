// Chapter 2 quiz.
//
// Q1 找错：本文件有两处问题（缺前向声明；函数有返回路径缺失）。
//     修复到零警告编译通过。
// Q2 预测输出（写在注释里）再运行验证。
// Q3 多文件：把 doubleAll 改造到 all.h / all.cpp（本文件只留 main）。
// Q4 设计：BMI 计算器——读体重(kg)与身高(m)，输出 BMI = kg / m^2。
#include <iostream>

int triple(int x) // Q3 之后此函数应移到 all.cpp
{
    return 3 * x;
}

int broken(int score) // Q1: -Wall 会警告什么？
{
    if (score >= 60)
        return 1;
}

int main()
{
    // Q2: 预测三行输出
    int a{ 5 };
    copyThenChange(a);
    std::cout << a << '\n';

    {
        int b{ 1 };
    }
    // std::cout << b; // Q2: 打开这行为什么报错？

    // Q1: 调用 triple 与 broken
    // Q4: 实现 BMI
    return 0;
}
