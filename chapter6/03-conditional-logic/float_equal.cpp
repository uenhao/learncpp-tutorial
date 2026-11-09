// Floating point comparison: == fails, epsilon comparison works.
#include <iostream>

int main()
{
    double a{ 0.1 };
    double b{ 0.2 };
    double expected{ 0.3 };

    std::cout << std::boolalpha;
    std::cout << "0.1+0.2 == 0.3 : " << (a + b == expected) << '\n'; // false!

    // Epsilon comparison (tolerance):
    double diff{ (a + b) - expected };
    bool close{ diff < 1e-9 && -diff < 1e-9 };
    std::cout << "close enough  : " << close << '\n'; // true
    return 0;
}
