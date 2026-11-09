// TODO 1: 直接编译。alexmath::doSomething 和 bobmath::doSomething
//         都想叫这个名字——把两个函数分别放进命名空间 alexmath 与
//         bobmath，用 :: 调用，输出 7 和 1。
// TODO 2: 试一试 `using namespace bobmath;`（放在全局），不改动调用处
//         编译是否能过？思考为什么这样有风险（两个都 using 会怎样）。
#include <iostream>

// 这两个函数当前重名冲突：
int doSomething(int x, int y)
{
    return x + y;
}

int doSomething(int x, int y) // 与上面的定义冲突
{
    return x - y;
}

int main()
{
    std::cout << doSomething(4, 3) << '\n'; // 想要 7
    std::cout << doSomething(4, 3) << '\n'; // 想要 1
    return 0;
}
