// Solution (official 17.10 quiz Q2): find the terminator, walk back.
#include <iostream>

void printCString(const char str[])
{
    while (*str != '\0')
    {
        std::cout << *str;
        ++str;
    }
}

void printCStringBackwards(const char str[])
{
    // We can't modify str (we need it later), so use a local pointer:
    const char* ptr{ str };

    // Find the null terminator.
    while (*ptr != '\0')
        ++ptr;

    // Walk backwards until ptr reaches str again.
    while (ptr-- != str)
    {
        std::cout << *ptr;
    }
}

int main()
{
    printCString("Hello world!");
    std::cout << '\n';

    printCStringBackwards("Hello world!");
    std::cout << '\n';

    return 0;
}
