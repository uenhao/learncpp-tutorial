// bool demo: default prints 0/1; std::boolalpha prints true/false.
#include <iostream>

int main()
{
    bool b{ false };
    std::cout << b << ' ' << !b << '\n';        // 0 1

    std::cout << std::boolalpha;
    std::cout << b << ' ' << !b << '\n';        // false true

    std::cout << std::noboolalpha;
    std::cout << b << ' ' << !b << '\n';        // 0 1 (switched back)
    return 0;
}
