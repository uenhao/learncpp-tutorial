// TODO 1: 直接编译本文件，读取第一条报错信息（注意：修错要从第一条开始，
//         后面的报错常常是"连坐"出来的）。
// TODO 2: 逐个修复错误：缺少分号、拼错的名字、错误的返回类型。
// TODO 3: 修到编译通过且输出 Hello, debugger! 为止。
//
// 本文件埋了 3 个典型编译错误。
#include <iostream>

int main()
{
    std::cout << "Hello, debugger!\n"   // 错误点 1：行尾缺分号
    retrun 0;                           // 错误点 2 + 3：拼写 & 见下
}
