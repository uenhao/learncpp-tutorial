// iostream demo: chained output and reading input.
#include <iostream>

int main()
{
    std::cout << "Enter two numbers: ";

    int x{};
    int y{};
    std::cin >> x >> y; // extraction chain, whitespace-separated

    std::cout << "You entered " << x << " and " << y << '\n';
    std::cout << "Sum: " << x + y << '\n';

    // std::endl flushes the buffer immediately -- use sparingly:
    std::cout << "Done." << std::endl;
    return 0;
}
