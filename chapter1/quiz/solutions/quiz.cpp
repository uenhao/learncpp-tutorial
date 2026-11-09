// Reference answers for the chapter 1 quiz.
#include <iostream>

int main()
{
    // ---- Q1 ----
    // 原错 1: `int x;` 未初始化就使用 -> UB。
    //         修复：定义时初始化。
    // 原错 2: `int y{ 3.5 };` 列表初始化禁止窄化 -> 编译错误。
    //         修复：改 int 字面量。
    int x{ 0 };
    std::cout << "x is " << x << '\n';
    int y{ 3 };

    // ---- Q2 预测: 3, 1, 14 ----
    std::cout << 7 / 2 << '\n';     // 3  (integer division truncates)
    std::cout << 7 % 2 << '\n';     // 1  (remainder)
    std::cout << 2 + 3 * 4 << '\n'; // 14 (* has higher precedence)

    // ---- Q3 ----
    std::cout << "Enter two integers: ";
    int a{};
    int b{};
    std::cin >> a >> b;
    std::cout << "sum: " << a + b << '\n';
    std::cout << "diff: " << a - b << '\n';
    std::cout << "prod: " << a * b << '\n';
    // b 为 0 时商是 UB -- 学完第 3/4 章后会加输入校验。
    std::cout << "quotient: " << a / b << '\n';

    // ---- Q4 ----
    std::cout << "Enter unit price and quantity: ";
    int unitPrice{};
    int quantity{};
    std::cin >> unitPrice >> quantity;
    std::cout << "total: " << unitPrice * quantity << '\n';

    return 0;
}
