// Quiz Q10 experiment: binary literal + std::hex output.
#include <iostream>

int main()
{
    int x{ 0b1100 };
    std::cout << x << '\n';             // 12
    std::cout << std::hex << x << '\n'; // c
    return 0;
}
