// ASCII anchors worth memorizing: '0'=48, 'A'=65, 'a'=97.
#include <iostream>

int main()
{
    std::cout << static_cast<int>('0') << '\n'; // 48
    std::cout << static_cast<int>('A') << '\n'; // 65
    std::cout << static_cast<int>('a') << '\n'; // 97
    std::cout << '7' - '0' << '\n';             // 7 (digit value from char)
    std::cout << 'B' - 'A' << '\n';             // 1 (offset within letters)
    return 0;
}
