// TODO 1: 本程序含 UB。先编译运行几次，观察输出是否每次不同。
// TODO 2: 找出所有未初始化变量并用 {} 或明确初值修复。
// TODO 3: 修复后再运行几次，输出应稳定不变。
//
// 额外挑战：用 -Wall -Wextra 编译原始版本，看编译器能抓出几处。
#include <iostream>

int main()
{
    int total;         // used without initialization -- UB
    int count{ 3 };
    int bonus;         // also uninitialized

    total = count + bonus; // adds garbage!

    std::cout << "total = " << total << '\n';
    return 0;
}
