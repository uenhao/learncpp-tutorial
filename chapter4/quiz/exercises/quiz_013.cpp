// Quiz experiment for Q3: verify floating point non-precision yourself.
#include <iostream>

int main()
{
    std::cout << std::boolalpha;
    std::cout << "0.1 + 0.2 == 0.3 : " << (0.1 + 0.2 == 0.3) << '\n';
    std::cout << "0.1 + 0.2       : " << 0.1 + 0.2 << '\n';
    std::cout << "5.0 / 0.0       : " << 5.0 / 0.0 << '\n';
    std::cout << "0.0 / 0.0       : " << 0.0 / 0.0 << '\n';
    return 0;
}
