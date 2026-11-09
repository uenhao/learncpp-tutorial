// Floating point precision demo: why you never compare floats with ==.
#include <iostream>

int main()
{
    double a{ 0.1 };
    double b{ 0.2 };
    double c{ 0.3 };

    std::cout << std::boolalpha;
    std::cout << "0.1 + 0.2 == 0.3 ? " << (a + b == c) << '\n'; // likely false!
    std::cout << "0.1 + 0.2 = " << (a + b) << '\n';             // 0.30000000000000004

    // The right way: compare with an error tolerance (epsilon)
    bool close{ (a + b - c) < 1e-9 && (c - (a + b)) < 1e-9 };
    std::cout << "close enough? " << close << '\n';

    // Default precision demo
    double oneThird{ 1.0 / 3.0 };
    std::cout << "1/3 printed: " << oneThird << '\n'; // rounded for display only
    return 0;
}
