// Forward declarations demo: use before define.
#include <iostream>

// Forward declarations (no body, ends with semicolon):
int add(int x, int y);
void printSum(int x, int y);

int main() // main can come first now
{
    printSum(2, 8);
    return 0;
}

// Definitions (with bodies):
void printSum(int x, int y)
{
    std::cout << x << " + " << y << " = " << add(x, y) << '\n';
}

int add(int x, int y)
{
    return x + y;
}
