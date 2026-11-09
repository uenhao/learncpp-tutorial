// Void functions demo.
#include <iostream>

void printDivider()
{
    std::cout << "----------\n";
}

void printPositive(int x)
{
    if (x <= 0)
        return; // early exit, no value

    std::cout << x << " is positive\n";
}

int main()
{
    printDivider();
    printPositive(5);
    printPositive(-3); // prints nothing
    printDivider();
    return 0;
}
