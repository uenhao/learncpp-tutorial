// TODO 1: 下面这段"一坨"代码功能正确但完全没排版。重排它：
//         每条语句一行、4 空格缩进、花括号风格统一。
// TODO 2: 其中有一行字符串字面量被折成两行导致编译错误，修复它。
// TODO 3: （可选）安装 clang-format 后执行
//         clang-format -i messy.cpp
//         对比你手工排版与工具输出的差异。
#include <iostream>

int main(){int a{5};int b{7};std::cout<<"sum="<<a+b<<'\n';std::cout<<"msg="<<"two
lines";return 0;}
