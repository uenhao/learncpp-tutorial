// Promotion vs conversion demo: short+short promotes to int.
#include <iostream>

int main()
{
    short a{ 2 };
    short b{ 3 };
    std::cout << a + b << ' ';       // 5
    std::cout << sizeof(a + b) << '\n'; // 4 -- promoted to int!

    double d{ 0.1 };
    float f{ 1.0f };
    std::cout << sizeof(f) << ' ';   // 4
    std::cout << sizeof(f + d) << '\n'; // 8 -- float promotes to double
    return 0;
}
