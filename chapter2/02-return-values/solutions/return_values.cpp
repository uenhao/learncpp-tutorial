// Solution for return_values.cpp.
#include <iostream>

// Returns the greater of two ints.
int max(int x, int y)
{
    if (x > y)
        return x;
    return y; // every path must return
}

int broken(int x)
{
    if (x > 0)
        return x;
    return 0; // FIX: -Wall warned "control reaches end of non-void function";
              // falling off the end of a value-returning function is UB
}

int main()
{
    std::cout << max(3, 7) << '\n';   // 7
    std::cout << max(9, 2) << '\n';   // 9
    std::cout << max(5, 5) << '\n';   // 5 (either is fine)

    std::cout << broken(-1) << '\n';  // now defined: 0

    std::cout << max(2, 3) + max(10, 4) << '\n'; // 3 + 10 = 13
    return 0;
}
