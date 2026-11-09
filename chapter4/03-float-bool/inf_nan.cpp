// inf / NaN demo: defined by IEEE 754 (unlike integer division by zero = UB).
#include <iostream>

int main()
{
    double zero{ 0.0 };
    std::cout << 5.0 / zero << '\n';   // inf
    std::cout << -5.0 / zero << '\n';  // -inf
    std::cout << 0.0 / zero << '\n';   // nan

    double result{ 5.0 / zero };
    std::cout << result + 100 << '\n'; // inf propagates through calculations!
    return 0;
}
