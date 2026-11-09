// constexpr demo: compile-time known constants.
#include <iostream>

int main()
{
    constexpr double gravity{ 9.8 };   // compile-time known
    constexpr int sum{ 4 + 5 };        // constant expression
    constexpr int d{ sum * 2 };        // constexpr vars feed constant expressions

    std::cout << gravity << ' ' << sum << ' ' << d << '\n'; // 9.8 9 18

    int a{};
    std::cin >> a;
    const int rt{ a }; // OK: runtime constant (const)
    // constexpr int bad{ a }; // uncomment: compile error! a is a runtime value

    std::cout << rt << '\n';
    return 0;
}
