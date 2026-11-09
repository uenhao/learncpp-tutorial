// Solution: two clean fixes.
#include <iostream>

int main()
{
    int x{ 5 };
    int y{ 7 };

    // Fix 1: parentheses
    if (!(x > y))
        std::cout << "x is NOT greater\n";

    // Fix 2: single != comparison (no NOT needed at all)
    if (x <= y)
        std::cout << "x is NOT greater\n";
    return 0;
}
