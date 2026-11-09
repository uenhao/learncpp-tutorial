// Overload demo: int and double versions of add (original lesson).
#include <iostream>

int add(int x, int y)
{
    return x + y;
}

double add(double x, double y)
{
    return x + y;
}

int main()
{
    std::cout << add(1, 2) << '\n';     // int version: 3
    std::cout << add(1.5, 2.5) << '\n'; // double version: 4
    return 0;
}
