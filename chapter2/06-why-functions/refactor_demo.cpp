// Refactoring demo: three duplicated blocks become one function.
#include <iostream>

// Applies an 8% tax and prints the breakdown for one item.
void printWithTax(int cents)
{
    int tax{ cents * 8 / 100 };
    int total{ cents + tax };
    std::cout << "item: " << cents
              << " + tax " << tax
              << " = " << total << '\n';
}

int main()
{
    std::cout << "-- before refactoring, this was copy-pasted 3 times --\n";
    printWithTax(1000);
    printWithTax(250);
    printWithTax(9999);
    return 0;
}
