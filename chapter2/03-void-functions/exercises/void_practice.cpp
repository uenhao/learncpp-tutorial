// TODO 1: 写 void 函数 printBanner()，输出三行星号框住的 "MENU"。
// TODO 2: 修复 main 中的错误用法（void 函数的结果被赋值了）。
// TODO 3: 给 printPositive 加"参数为 0 时输出 nothing to print"，
//         注意用提前 return 保持函数扁平。
#include <iostream>

// TODO 1: printBanner

void printPositive(int x)
{
    if (x <= 0)
        return;
    std::cout << x << " is positive\n";
}

int main()
{
    // int result{ printBanner() };  // TODO 2: 为什么编译不过？修复。

    printPositive(7);
    printPositive(0);   // TODO 3 之后应输出 nothing to print
    return 0;
}
