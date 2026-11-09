// TODO 1: 用 Debug 配置编译：
//   g++ -std=c++20 -g -O0 -o demo_debug sizeof_demo.cpp
// TODO 2: 用 Release 配置编译：
//   g++ -std=c++20 -O2 -o demo_release sizeof_demo.cpp
// TODO 3: ls -l demo_debug demo_release 比较大小，填写下表：
//   debug 大小: ______   release 大小: ______
// TODO 4: 思考：为什么 Debug 更大？（提示：-g 加入了什么？-O0 没有做什么？）
// TODO 5: 思考：为什么 Release 下在调试器里看 width/height 可能显示
//   "<optimized out>" 或值来自寄存器？
#include <iostream>

int square(int x)
{
    return x * x;
}

int main()
{
    int width{ 5 };
    int height{ 8 };
    int area{ square(width * height / 2) };

    std::cout << "width  = " << width << '\n';
    std::cout << "height = " << height << '\n';
    std::cout << "area   = " << area << '\n';
    std::cout << "main is at address " << reinterpret_cast<void*>(main) << '\n';
    return 0;
}
