// Ternary demo (from the original lesson).
#include <iostream>

int main()
{
    std::cout << "Enter two numbers: ";
    int x{}, y{};
    std::cin >> x >> y;

    int max{ (x > y) ? x : y };
    std::cout << "The max of " << x << " and " << y << " is " << max << ".\n";

    // ?: works where statements can't -- inside an output chain:
    std::cout << x << " is " << ((x > y) ? "bigger" : "not bigger") << '\n';
    return 0;
}
