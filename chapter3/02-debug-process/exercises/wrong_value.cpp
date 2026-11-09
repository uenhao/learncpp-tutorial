// 六步流程练习：程序应打印 "area = 15"（宽 3 × 高 5），实际打印 area = 8。
// 要求：不许直接看答案；按 ①找根因 ②理解 ③定修法 ④修 ⑤复测 ⑥复测无新伤，
// 把每步结论写在下面注释里，然后对照 solutions/walkthrough.md。
//
// 我的调试记录：
// ① 根因是哪一行？为什么？（提示：症状在打印，但打印行传的是什么？）
//
#include <iostream>

int width { 3 };
int height { 5 };
int area { width + height }; // 想想这里应该是加还是乘？

int main()
{
    std::cout << "area = " << area << '\n';
    return 0;
}
