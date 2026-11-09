// Solution for void_practice.cpp.
#include <iostream>

void printBanner()
{
    std::cout << "*********\n";
    std::cout << "*  MENU  *\n";
    std::cout << "*********\n";
}

void printPositive(int x)
{
    if (x < 0)
        return; // silently ignore negatives
    if (x == 0)
    {
        std::cout << "nothing to print\n";
        return; // early exit keeps the main path flat
    }
    std::cout << x << " is positive\n";
}

int main()
{
    // TODO 2 fix: a void function produces no value, so its call cannot
    // initialize an int. Just call it:
    printBanner();

    printPositive(7);
    printPositive(0); // nothing to print
    printPositive(-2); // silent
    return 0;
}
