// Quiz Q1-Q4 reference solution.
#include <iostream>
#include "all.h"

int broken(int score)
{
    if (score >= 60)
        return 1;
    return 0; // FIX: every path returns (was: control reaches end, UB)
}

void copyThenChange(int x) // defined below for Q2 clarity
{
    x = 100;
}

int main()
{
    // Q1: triple now declared via all.h
    std::cout << triple(4) << '\n'; // 12
    std::cout << broken(50) << '\n'; // 0, no warning

    // Q2 predictions: 5, then compile error for b (out of scope)
    int a{ 5 };
    copyThenChange(a);
    std::cout << a << '\n'; // 5 -- parameter is a copy

    {
        int b{ 1 };
    }
    // std::cout << b; // error: b destroyed at end of block

    // Q4: BMI calculator
    std::cout << "Enter weight(kg) and height(m): ";
    double weight{};
    double height{};
    std::cin >> weight >> height;
    std::cout << "BMI = " << weight / (height * height) << '\n';

    /*
     * Design notes for Q4:
     *   输入：体重 kg（double）、身高 m（double）
     *   输出：BMI = weight / height^2（一位小数可留待后续格式化章节）
     *   测试：70kg 1.75m -> 22.86；0 身高 -> 除零 UB，应提示错误
     *   （学完条件与循环后可加校验）
     */
    return 0;
}
