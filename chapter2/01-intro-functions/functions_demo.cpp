// Function basics: define, call, nested calls.
#include <iostream>

void doPrint()
{
    std::cout << "In doPrint()\n";
}

void doB()
{
    std::cout << "In doB(), about to call doPrint()\n";
    doPrint(); // nested call
    std::cout << "Back in doB()\n";
}

int main()
{
    std::cout << "Starting main()\n";
    doPrint();
    doB();
    std::cout << "Ending main()\n";
    return 0;
}
