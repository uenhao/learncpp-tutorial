// Solution for refactor_me.cpp.
#include <iostream>

// Prints "unit*qty=subtotal" for one line item.
void printSubtotal(int unitPrice, int quantity)
{
    std::cout << unitPrice * quantity << '\n';
}

int main()
{
    printSubtotal(3, 250);
    printSubtotal(2, 480);
    printSubtotal(5, 199);
    printSubtotal(1, 25);

    // With the logic in one place, the "10% off over 100" requirement
    // means editing exactly one function (printSubtotal), not four lines.
    return 0;
}
