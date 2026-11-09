// Dangling else demo (original lesson's "Too bad!" case).
#include <iostream>

int main()
{
    std::cout << "Enter your height (in cm): ";
    int x{};
    std::cin >> x;

    if (x >= 140)
        std::cout << "You are tall enough to ride.\n";
    else
        std::cout << "You are not tall enough to ride.\n";
        std::cout << "Too bad!\n"; // runs for EVERYONE (indentation lies)

    // Fixed version:
    if (x >= 140)
    {
        std::cout << "You are tall enough to ride.\n";
    }
    else
    {
        std::cout << "You are not tall enough to ride.\n";
        std::cout << "Too bad!\n"; // now properly in the else
    }
    return 0;
}
