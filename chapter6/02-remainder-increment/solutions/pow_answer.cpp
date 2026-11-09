// Solution: both print 1024. Note std::pow returns double (prints 1024
// because trailing .0 is hidden; result type is double though).
#include <iostream>
#include <cmath>

int main()
{
    std::cout << std::pow(2.0, 10.0) << '\n'; // 1024 (as double)

    int result{ 1 };
    for (int i{ 0 }; i < 10; ++i)
        result = result * 2;
    std::cout << result << '\n'; // 1024 (pure int)
    return 0;
}
