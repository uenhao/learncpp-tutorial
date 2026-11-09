// Parameters and arguments demo: arguments are copied into parameters.
#include <iostream>

void printValue(int x) // x is a parameter (local variable)
{
    std::cout << "got " << x << '\n';
}

int add(int x, int y)
{
    return x + y;
}

int main()
{
    printValue(42);       // argument 42 copied into x

    int a{ 10 };
    int b{ 20 };
    std::cout << add(a, b) << '\n'; // values of a and b copied

    printValue(a + 1);    // expression evaluated first: 11 copied
    return 0;
}
