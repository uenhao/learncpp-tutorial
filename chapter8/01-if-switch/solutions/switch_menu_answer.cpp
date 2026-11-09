// Solution for switch_menu.cpp
#include <iostream>

int main()
{
    std::cout << "Enter two integers and an op (e.g. 6 3 /): ";
    int x{}, y{};
    char op{};
    std::cin >> x >> y >> op;

    switch (op)
    {
    case '+':
        std::cout << x + y << '\n';
        break;
    case '-':
        std::cout << x - y << '\n';
        break;
    case '*':
        std::cout << x * y << '\n';
        break;
    case '/':
        if (y == 0)
            std::cout << "cannot divide by zero\n";
        else
            std::cout << x / y << '\n';
        break;
    default:
        std::cout << "unknown\n";
        break;
    }
    return 0;
}
