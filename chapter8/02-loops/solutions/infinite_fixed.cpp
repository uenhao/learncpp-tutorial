// Fixed: braces make both statements part of the loop.
#include <iostream>

int main()
{
    int count{ 0 };
    while (count < 3)
    {
        std::cout << count << ' ';
        ++count;
    }
    std::cout << '\n';
    return 0;
}
