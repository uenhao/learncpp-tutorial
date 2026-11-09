// Demonstrates the compile + link pipeline across translation units.
#include <iostream>

// Declared here, defined in add.cpp (see lesson 2.7 for forward declarations).
int add(int x, int y);

int main()
{
    std::cout << "The sum of 3 and 4 is: " << add(3, 4) << '\n';
    return 0;
}
