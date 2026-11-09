// Solution: compare against 0 (sign-agnostic).
#include <iostream>

bool isOdd(int x)
{
    return (x % 2) != 0;
}

int main()
{
    std::cout << "isOdd(5):  " << isOdd(5) << '\n';   // 1
    std::cout << "isOdd(-5): " << isOdd(-5) << '\n';  // 1 -- correct now
    return 0;
}
