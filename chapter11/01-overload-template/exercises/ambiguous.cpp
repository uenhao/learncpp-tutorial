// Exercise: both print calls are ambiguous. Compile to see the errors,
// then fix with explicit casts (or add precise overloads).
#include <iostream>

void print(int x)
{
    std::cout << "int: " << x << '\n';
}

void print(double x)
{
    std::cout << "double: " << x << '\n';
}

int main()
{
    print(5L);    // ambiguous: long -> int? double?
    print('a');   // ambiguous: char -> int? double?
    return 0;
}
