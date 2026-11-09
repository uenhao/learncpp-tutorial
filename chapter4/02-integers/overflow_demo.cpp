// Overflow demo: signed integer overflow is UB. On the author's machine
// this printed 2147483647 then -2147483648 (two's complement wraparound),
// but that is implementation behavior, NOT guaranteed by the standard.
#include <iostream>

int main()
{
    int x { 2'147'483'647 }; // max 32-bit signed int (' is a digit separator)
    std::cout << x << '\n';

    x = x + 1;               // integer overflow: undefined behavior!
    std::cout << x << '\n';
    return 0;
}
