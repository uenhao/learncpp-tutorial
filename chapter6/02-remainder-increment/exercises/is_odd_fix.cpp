// Exercise: isOdd(-5) wrongly returns false. Fix it (best practice:
// compare remainder against 0). Then test with -5.
#include <iostream>

bool isOdd(int x)
{
    return (x % 2) == 1; // BUG: fails for negative odd numbers
}

int main()
{
    std::cout << "isOdd(5):  " << isOdd(5) << '\n';   // 1
    std::cout << "isOdd(-5): " << isOdd(-5) << '\n';  // 0 -- wrong!
    return 0;
}
