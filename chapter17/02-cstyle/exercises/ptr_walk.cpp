// Exercise (official 17.10 quiz Q2): print a C-style string backwards.
//
// TODO: implement printCStringBackwards() using ONLY pointer arithmetic:
//   1. Copy str into a local const char* ptr.
//   2. Walk ptr forward until *ptr == '\0' (find the terminator).
//   3. Then walk backwards, printing *ptr, while ptr != str.
//      Hint: `while (ptr-- != str)` compares first and moves afterwards --
//      exactly the order needed to stop when we reach the start.
//
// Expected output:
//   Hello world!
//   !dlrow olleH
#include <iostream>

void printCString(const char str[])
{
    while (*str != '\0')
    {
        std::cout << *str;
        ++str;
    }
}

void printCStringBackwards(const char[]) // TODO: implement (name the parameter)
{
}

int main()
{
    printCString("Hello world!");
    std::cout << '\n';

    printCStringBackwards("Hello world!");
    std::cout << '\n';

    return 0;
}
