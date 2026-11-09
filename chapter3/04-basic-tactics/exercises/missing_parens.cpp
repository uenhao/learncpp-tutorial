// 战术二练习：程序应打印 4，实际打印 1（或某个地址）。
// 用"函数入口打印流程"战术定位 bug（提示：getValue 有没有被调用？）。
#include <iostream>

int getValue()
{
	return 4;
}

int main()
{
    std::cout << getValue << '\n'; // 有 bug！
    return 0;
}
