// TODO 1: 直接编译：g++ -std=c++20 -Wall -Wextra -I. -o demo main.cpp impl.cpp
//         读"redefinition"报错——config.h 内容被包含了两遍。
// TODO 2: 给 config.h、a.h、b.h 都补上头文件保护，重新编译。
// TODO 3: 思考：main.cpp 没有直接 include config.h，为什么也会中招？
#include "a.h"
#include "b.h"

int main()
{
    return alpha() + beta() + getConfigValue();
}
