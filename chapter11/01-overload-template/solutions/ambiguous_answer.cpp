// Solution: cast the ambiguous arguments explicitly.
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
    print(static_cast<int>(5L));    // choose int version
    print(static_cast<double>('a')); // 'a' is 65 -> prints double: 65
    return 0;
}
