// TODO 1: 只编译不链接并输出预处理结果：
//         g++ -E macro_quiz.cpp -o /dev/stdout | tail -25
//         找到 main，观察宏被替换成了什么文本。
// TODO 2: 预测输出（写在注释里）再编译运行验证：
//         DOUBLE(4) 展开成 4*2 -> 8？
// TODO 3: 这份"能编译的宏"其实踩了宏的经典的坑（结合 -E 输出解释）。
//         修好它：让 SQUARE(3+1) 输出 16 而不是 7。
// TODO 4: 用 constexpr 函数替代宏（现代做法）。
#include <iostream>

#define DOUBLE(x) x*2
#define SQUARE(x) x*x

int main()
{
    std::cout << DOUBLE(4) << '\n';   // TODO 2: 预测 ____
    std::cout << SQUARE(3 + 1) << '\n'; // TODO 2: 预测 ____（会不会是 16？）
    return 0;
}
