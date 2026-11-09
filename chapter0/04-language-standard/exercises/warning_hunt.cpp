// TODO 1: 先不带警告编译：g++ -std=c++20 -o hunt warning_hunt.cpp  —— 能过吗？
// TODO 2: 加上警告：g++ -std=c++20 -Wall -Wextra -o hunt warning_hunt.cpp
// TODO 3: 根据警告逐条修复，直到零警告。
// TODO 4: （挑战）给编译命令加 -Werror，体会"把警告当错误"的团队习惯。
//
// 本文件至少埋了 4 处会产生 -Wall/-Wextra 警告的问题。
#include <iostream>

int unfinished(int x)
{
    // 警告点：有返回值的函数没有 return
    if (x > 0)
    {
        return x;
    }
}

int main()
{
    int unused{ 42 };          // 警告点：定义了但没用

    int initList{ 3.5 };       // 警告点：用 double 初始化 int（窄化转换）

    std::cout << "result = " << unfinished(5) << '\n';
    std::cout << initList << '\n';
    return 0;
}
