// TODO 1: 实现 doubleArea(int width, int height) 返回 (width*height)*2。
// TODO 2: 预测 tryToModify 输出后 a 的值是多少？
//         （提示：形参是拷贝，改形参不影响实参。）
// TODO 3: 编译验证你的预测；把结论写在注释里。
#include <iostream>

// TODO 1: doubleArea

void tryToModify(int x)
{
    x = 999; // modifies the COPY
    std::cout << "inside: " << x << '\n';
}

int main()
{
    std::cout << doubleArea(3, 4) << '\n'; // TODO 1 之后应输出 24

    int a{ 5 };
    tryToModify(a);
    // TODO 2 预测: a = ____
    std::cout << "after: " << a << '\n';
    return 0;
}
