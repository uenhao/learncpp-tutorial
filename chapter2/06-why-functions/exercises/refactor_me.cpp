// TODO: 下面的 main 把同一段"单价 x 数量 = 小计"逻辑复制了 4 次。
//       重构：提取一个函数 printSubtotal(int unitPrice, int quantity)
//       输出格式保持：unit*qty=subtotal
//       然后让 main 只包含 4 次函数调用。
// 完成后思考：如果需求变成"超过 100 的订单打 9 折"，改几行就够了？
#include <iostream>

int main()
{
    std::cout << 3 * 250 << '\n';    // unit*qty=subtotal
    std::cout << 2 * 480 << '\n';
    std::cout << 5 * 199 << '\n';
    std::cout << 1 * 25  << '\n';
    return 0;
}
