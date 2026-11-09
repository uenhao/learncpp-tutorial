// Loop hunt: 期望 total = 55（1+2+...+10），实际打印了别的值。
// 每轮把 i 累加进 total，但其中一轮 total 发生了异常跳变。
// 任务：在循环内打断点，用 Continue 逐轮观察 i 与 total，
// 找出是第几轮（i 为多少）出错，并解释原因。
#include <iostream>

int main()
{
    int total{ 0 };
    for (int i{ 1 }; i <= 10; ++i)
    {
        total = total + i;
        if (i == 4)
            total = total * 2; // sabotage! find this round with the debugger
    }
    std::cout << "total = " << total << '\n';
    return 0;
}
