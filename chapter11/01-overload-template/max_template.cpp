// Function template demo: one definition, many instantiations.
#include <iostream>

template <typename T>
T max(T x, T y)
{
    return (x < y) ? y : x;
}

int main()
{
    std::cout << max<int>(1, 2) << '\n';    // explicit instantiation
    std::cout << max(3, 4) << '\n';         // implicit: T=int -> 4

    // std::cout << max(3, 4.5) << '\n';    // uncomment: compile error!
    // T deduced as int from 3 AND double from 4.5 -- conflict.
    return 0;
}
