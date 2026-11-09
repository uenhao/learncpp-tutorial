// Numeral systems: same value, four spellings.
#include <iostream>

int main()
{
    int dec{ 12 };
    int bin{ 0b1100 };
    int oct{ 014 };
    int hex{ 0xC };

    std::cout << dec << ' ' << bin << ' ' << oct << ' ' << hex << '\n'; // 12 12 12 12

    std::cout << dec << '\n';             // 12
    std::cout << std::hex << dec << '\n'; // c
    std::cout << std::oct << dec << '\n'; // 14
    std::cout << std::dec << dec << '\n'; // 12
    return 0;
}
