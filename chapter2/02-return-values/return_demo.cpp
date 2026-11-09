// Value-returning functions demo.
#include <iostream>

int add(int x, int y)
{
    return x + y; // return hands the value back and exits the function
}

int multiply(int x, int y)
{
    return x * y;
}

int main()
{
    std::cout << add(4, 5) << '\n';            // use directly

    int sum{ add(1, 2) };                      // use as initializer
    std::cout << sum << '\n';

    std::cout << add(1, multiply(2, 3)) << '\n'; // nested: 1 + 6 = 7
    return 0;
}
