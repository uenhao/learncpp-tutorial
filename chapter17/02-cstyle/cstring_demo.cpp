// C-style strings: char arrays + hidden null terminator.
#include <cstring> // for std::strlen
#include <iostream>
#include <iterator> // for std::size

// Walk a C-style string with pointer arithmetic (official 17.10 quiz Q1):
void printCString(const char str[])
{
    while (*str != '\0')
    {
        std::cout << *str;
        ++str;
    }
}

int main()
{
    const char str[]{ "string" }; // 6 chars + hidden '\0' (array length 7)

    std::cout << str << '\n'; // cout prints until it hits the '\0'

    std::cout << "array length: " << std::size(str) << '\n';   // 7
    std::cout << "string length: " << std::strlen(str) << '\n'; // 6 (slow walk)

    printCString(str);
    std::cout << '\n';
    printCString("Hello world!"); // the literal decays to const char*
    std::cout << '\n';

    return 0;
}
