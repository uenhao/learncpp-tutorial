// Naming conventions demo: camelCase for variables/functions.
#include <iostream>

int calculateTotalPrice(int unitPrice, int quantity)
{
    return unitPrice * quantity;
}

int main()
{
    int unitPrice{ 199 };
    int quantity{ 3 };
    int totalPrice{ calculateTotalPrice(unitPrice, quantity) };

    std::cout << "Total: " << totalPrice << '\n';
    return 0;
}
