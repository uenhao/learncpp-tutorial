// Division's two modes: int/int truncates toward zero; any float -> float div.
#include <iostream>

int main()
{
    std::cout << 7 / 4 << '\n';                        // 1  (integer division)
    std::cout << -7 / 4 << '\n';                       // -1 (truncates toward zero)
    std::cout << 7.0 / 4 << '\n';                      // 1.75
    std::cout << static_cast<double>(7) / 4 << '\n';   // 1.75
    std::cout << static_cast<double>(7 / 4) << '\n';   // 1  (too late!)
    return 0;
}
