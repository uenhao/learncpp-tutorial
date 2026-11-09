// Automatic vs static local variables (original lesson's contrast).
#include <iostream>

void incrementAndPrint()
{
    int value{ 1 }; // automatic: rebuilt each call
    ++value;
    std::cout << value << '\n';
} // destroyed

void incrementAndPrintStatic()
{
    static int s_value{ 1 }; // static: initialized only on FIRST call
    ++s_value;
    std::cout << s_value << '\n';
} // not destroyed; just out of scope

int main()
{
    incrementAndPrint();          // 2
    incrementAndPrint();          // 2
    incrementAndPrint();          // 2

    incrementAndPrintStatic();    // 2
    incrementAndPrintStatic();    // 3
    incrementAndPrintStatic();    // 4
    return 0;
}
