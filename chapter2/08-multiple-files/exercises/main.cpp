// TODO: 与示例 squares/ 一样，创建一个三文件程序但内容不同：
//   main.cpp（本文件）：声明 distance(int x1, int y1, int x2, int y2)
//                       并打印 (0,0)->(3,4) 的距离，应为 5。
//   geometry.cpp：实现 distance（勾股：先算平方和，取平方根）。
//   提示：需要 <cmath> 里的 std::sqrt，返回类型用 double。
// TODO: 编译命令（两种都试）：
//   g++ -std=c++20 -Wall -Wextra -o geo main.cpp geometry.cpp
//   g++ -std=c++20 -c main.cpp && g++ -std=c++20 -c geometry.cpp && g++ main.o geometry.o -o geo
// TODO: 只用 main.cpp 链接一次，体验 undefined reference。
#include <iostream>

// TODO: 前向声明 distance

int main()
{
    // TODO: 打印 distance(0, 0, 3, 4)
    return 0;
}
