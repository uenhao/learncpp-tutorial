// Quiz Q10 experiment: template max with implicit deduction.
#include <iostream>

template <typename T>
T max(T x, T y)
{
    return (x < y) ? y : x;
}

int main()
{
    std::cout << max(5, 6) << '\n'; // 6
    // std::cout << max(5, 6.5) << '\n'; // uncomment: T conflict error
    return 0;
}
