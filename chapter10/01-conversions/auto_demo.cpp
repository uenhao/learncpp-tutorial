// auto deduction demo (original lesson patterns).
#include <iostream>

int add(int x, int y)
{
    return x + y;
}

int main()
{
    auto d{ 5.0 };        // double
    auto i{ 1 + 2 };      // int
    auto s{ add(5, 6) };  // int (from return type)
    auto f{ 1.23f };      // float (suffix)
    const auto c{ 5 };    // const int

    std::cout << d << ' ' << i << ' ' << s << ' ' << f << ' ' << c << '\n';

    // auto bad{};        // compile error: nothing to deduce from
    return 0;
}
