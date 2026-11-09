// const from a runtime value: legal! const means read-only, not compile-time.
#include <iostream>

int main()
{
    std::cout << "Enter a number: ";
    int a{};
    std::cin >> a;

    const int b{ a };       // OK: b can't be reassigned, value known at runtime
    const int c{ 5 + 3 };   // OK: value known at compile time (8)

    std::cout << b << ' ' << c << '\n';
    return 0;
}
