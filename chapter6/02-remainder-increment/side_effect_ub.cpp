// Side effect + undefined argument evaluation order = UB.
// Compile twice: with -O0 and with -O2. The printed value may differ
// (11 vs 12) -- both are "correct", which is exactly why this is UB.
#include <iostream>

int add(int x, int y)
{
    return x + y;
}

int main()
{
    int x{ 5 };
    int value{ add(x, ++x) }; // UB: reads x and modifies x in one statement
    std::cout << value << '\n';

    // The fix: one side effect per statement
    x = 5;
    ++x;
    int fixed{ add(x, x) }; // deterministic: 12
    std::cout << fixed << '\n';
    return 0;
}
