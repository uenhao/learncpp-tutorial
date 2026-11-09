// TODO 1: 直接编译，读第一条错误（提示：又是"用时尚未声明"）。
// TODO 2: 为 secret 添加前向声明使程序通过编译。
// TODO 3: 再打开重复定义那行，编译——这违反 One Definition Rule，
//         观察报错后注释回去。
// TODO 4: 一句话总结：声明可以重复，定义不行。
#include <iostream>

// TODO 2: 前向声明写在这里

int main()
{
    std::cout << secret(6) << '\n';
    return 0;
}

int secret(int x)
{
    return x * x;
}

// int secret(int x)   // TODO 3: 取消注释体验 ODR 冲突
// {
//     return x + 100;
// }
