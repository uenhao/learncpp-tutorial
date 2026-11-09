// Solution for base_convert.cpp
#include <iostream>

int main()
{
    int v{ 255 };
    std::cout << v << '\n';               // 255 (dec)
    std::cout << std::hex << v << '\n';   // ff
    std::cout << std::oct << v << '\n';   // 377
    std::cout << std::dec << v << '\n';   // 255 (switched back)

    int bits{ 0b1111'1111 };              // 255 in binary spelling
    std::cout << bits << '\n';            // 255
    return 0;
}
