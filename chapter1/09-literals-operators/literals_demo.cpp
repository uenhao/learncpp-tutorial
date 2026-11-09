// Literals and operators demo.
#include <iostream>

int main()
{
    std::cout << 42 << '\n';        // int literal
    std::cout << 3.14 << '\n';      // double literal
    std::cout << 'A' << '\n';       // char literal (single quotes)
    std::cout << "A" << '\n';       // string literal (double quotes) -- different type!
    std::cout << true << '\n';      // prints 1

    std::cout << 7 % 3 << '\n';     // remainder: 1
    std::cout << -8 << '\n';        // unary minus
    return 0;
}
