// Solution: cast BEFORE the division (cast after is too late: int/int
// already truncated). Casting one operand is enough to make it float div.
#include <iostream>

int main()
{
    int a{ 7 };
    int b{ 2 };
    std::cout << static_cast<double>(a) / b << '\n'; // 3.5

    int c{ 9 };
    int d{ 4 };
    std::cout << static_cast<double>(c) / d << '\n'; // 2.25

    // The wrong version, for comparison:
    std::cout << static_cast<double>(a / b) << '\n'; // 3  (int/int first!)
    return 0;
}
