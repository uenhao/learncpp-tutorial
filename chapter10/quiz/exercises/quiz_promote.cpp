// Quiz Q10 experiment: short+short promotes to int.
#include <iostream>

int main()
{
    short a{ 2 };
    short b{ 3 };
    std::cout << a + b << ' ' << sizeof(a + b) << '\n'; // 5 4
    std::cout << 2 + 3.5 << '\n'; // 5.5
    return 0;
}
