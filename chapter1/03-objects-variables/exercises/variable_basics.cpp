// TODO 1: 定义一个 int 变量 score，初始化为 95，打印它。
// TODO 2: 给 score 重新赋值为 88，再打印，观察"同一变量可被覆盖"。
// TODO 3: 取消注释 inner block，先预测输出再验证：
//         内层的 x 和外层的 x 是同一个对象吗？
// TODO 4: 打开最后一行的注释（在内层块之外使用 innerVal），编译，
//         读报错——这就是"作用域"限制。
#include <iostream>

int main()
{
    int x{ 1 };
    std::cout << "outer x = " << x << '\n';

    // {
    //     int x{ 99 };        // shadows outer x
    //     int innerVal{ 7 };
    //     std::cout << "inner x = " << x << '\n';
    // }

    std::cout << "outer x again = " << x << '\n';
    // std::cout << innerVal << '\n';

    // TODO 1 & 2: score 变量写在这里

    return 0;
}
