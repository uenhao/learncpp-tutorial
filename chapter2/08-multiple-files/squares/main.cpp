// Multi-file demo: main.cpp declares, squares.cpp defines.
#include <iostream>

// Forward declarations for functions defined in squares.cpp:
int square(int x);
int cube(int x);

int main()
{
    std::cout << "square(5) = " << square(5) << '\n';
    std::cout << "cube(3)   = " << cube(3) << '\n';
    return 0;
}
