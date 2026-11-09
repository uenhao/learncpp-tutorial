// TODO 1: 编译 main.cpp 时故意把 main.cpp 里的 add 改成 addNums，
//         先只编译 main.cpp（g++ -c），观察编译能否通过。
// TODO 2: 再链接（g++ main.o add.o -o prog），观察 "undefined reference" 链接错误。
// TODO 3: 恢复名字，重新编译链接，程序应输出 The sum of 3 and 4 is: 7。
//
// 这个练习的目的：亲眼区分「编译错误」和「链接错误」。
#include <iostream>

int add(int x, int y);

int main()
{
    std::cout << "The sum of 3 and 4 is: " << add(3, 4) << '\n';
    return 0;
}
