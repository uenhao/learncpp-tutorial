// The leading-zero octal trap.
#include <iostream>

int main()
{
    int a{ 12 };  // twelve (decimal)
    int b{ 012 }; // TEN! (0 prefix = octal: 1*8 + 2)
    std::cout << a << ' ' << b << '\n'; // 12 10
    return 0;
}
