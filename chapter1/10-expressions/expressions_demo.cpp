// Expressions demo: every expression produces a value.
#include <iostream>

int main()
{
    int x{ 2 };
    int y{ 3 };

    std::cout << x + y << '\n';        // 5
    std::cout << x * y + 10 << '\n';   // 16 (* before +)
    std::cout << (x + y) * 10 << '\n'; // 50 (parentheses win)
    std::cout << 10 - 4 - 3 << '\n';   // 3 (left-to-right)

    int z{ x * y }; // initializer is an expression too
    std::cout << z << '\n';
    return 0;
}
