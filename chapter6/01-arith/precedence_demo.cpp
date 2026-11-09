// Precedence demo: ! has higher precedence than ==.
#include <iostream>

int main()
{
    int x{ 5 };
    int y{ 7 };

    if (!x > y)          // parsed as (!x) > y  -> 0 > 7 -> false
        std::cout << "x is not greater\n";
    else
        std::cout << "x is greater\n"; // prints this! x(5) IS less than y(7)

    // Correct ways:
    std::cout << (x != y) << '\n';      // 1
    std::cout << (!(x > y)) << '\n';    // 1
    return 0;
}
