// char arithmetic demo: char promotes to int in expressions.
#include <iostream>

int main()
{
    char c{ 'A' };
    std::cout << c << '\n';        // A (printed as character)
    std::cout << c + 1 << '\n';    // 66 (promoted to int!)
    std::cout << static_cast<int>(c) << '\n'; // 65 (explicit)

    char next{ static_cast<char>(c + 1) }; // back to char
    std::cout << next << '\n';     // B
    return 0;
}
