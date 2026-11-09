// Arithmetic conversions: common type negotiation.
#include <iostream>

int main()
{
    std::cout << 2 + 3.5 << '\n';   // 5.5 -- int converts to double
    std::cout << 7 / 2 << '\n';     // 3   -- int/int
    std::cout << 7 / 2.0 << '\n';   // 3.5 -- 2 converts to double

    unsigned int u{ 1 };
    int s{ -1 };
    std::cout << (u + s) << '\n';   // surprising! s converts to unsigned -> huge number
    return 0;
}
