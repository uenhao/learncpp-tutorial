#include <iostream>
#include "math_utils.h" // one include instead of three declarations

int main()
{
    std::cout << "square(7) = " << square(7) << '\n';
    std::cout << "cube(3)   = " << cube(3) << '\n';
    std::cout << "max(2,9)  = " << maxOf(2, 9) << '\n';
    return 0;
}
