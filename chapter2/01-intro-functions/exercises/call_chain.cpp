// TODO 1: 定义一个函数 sayHello()，输出一行 "Hello from a function!"，
//         并在 main 里调用它两次。
// TODO 2: 先在注释里预测下面程序的输出顺序，再编译运行验证：
//         main -> A() -> A() 调用 C() -> 回到 A -> 回到 main -> B()
// TODO 3: 把 sayHello 的调用放到另一个函数 greetTwice() 里，
//         由 main 调用 greetTwice()，体会"调用链"。
#include <iostream>

void a()
{
    std::cout << "A start\n";
    c(); // 注意：这里直接写 c() 编译不过！为什么？（下一节揭晓）
    std::cout << "A end\n";
}

void b()
{
    std::cout << "B\n";
}

int main()
{
    std::cout << "main start\n";
    a();
    b();
    std::cout << "main end\n";
    return 0;
}
