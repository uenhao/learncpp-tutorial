// Quiz experiments: Q7 (step-by-3 for), Q10 (sum), plus the continue variant.
#include <iostream>

int main()
{
    for (int i{ 0 }; i < 10; i += 3)
        std::cout << i << ' ';
    std::cout << '\n'; // 0 3 6 9

    int sum{ 0 };
    for (int i{ 1 }; i <= 5; ++i)
        sum += i;
    std::cout << sum << '\n'; // 15

    int oddSum{ 0 };
    for (int i{ 1 }; i <= 5; ++i)
    {
        if (i % 2 == 0)
            continue; // skip evens
        oddSum += i;
    }
    std::cout << oddSum << '\n'; // 9
    return 0;
}
