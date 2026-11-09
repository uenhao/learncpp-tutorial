// TODO 1: 预测每行输出（写在行尾注释里），再编译运行验证。
// TODO 2: 打开 shadowed 块的注释，加上 -Wshadow 编译：
//         g++ -std=c++20 -Wall -Wextra -Wshadow -o scope scope_trace.cpp
//         读警告，然后把内层变量改名为 valueInner 消除遮蔽。
// TODO 3: 思考：把 calls 改成什么才"记住"上次调用？
//         （提示：超出本章工具；写下你的猜想，第 O 章 static 会揭晓。）
#include <iostream>

void counter()
{
    int calls{ 1 };
    ++calls;
    std::cout << calls << '\n';
}

int main()
{
    counter();
    counter();
    counter(); // TODO 1: 输出几？为什么每次都是同一个数？

    int value{ 10 };
    {
        // int value{ 99 }; // TODO 2: shadows outer value
        // std::cout << value << '\n';
    }
    std::cout << value << '\n';
    return 0;
}
