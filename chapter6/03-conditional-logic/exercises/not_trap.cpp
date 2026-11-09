// Exercise: fix the ! precedence trap two ways: parentheses, and rewriting
// as a single != comparison. Both should print "x is NOT greater".
#include <iostream>

int main()
{
    int x{ 5 };
    int y{ 7 };

    if (!x > y) // BUG
        std::cout << "x is greater\n";
    else
        std::cout << "x is NOT greater\n";
    return 0;
}
