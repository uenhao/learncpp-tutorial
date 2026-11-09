// Solution for init_styles.cpp
#include <iostream>

int main()
{
    int a = 5;   // copy initialization
    int b(7);    // direct initialization
    int c{ 9 };  // list initialization -- preferred

    std::cout << a << ' ' << b << ' ' << c << '\n';

    // TODO 2 fixed: keep the value as double if the fraction matters,
    // or store an int if the value is integral by nature.
    double precise{ 3.5 };
    std::cout << precise << '\n';

    /*
     * Why `int t = 3.9;` compiles but t == 3:
     * copy initialization performs an implicit conversion from double to
     * int, which drops the fractional part (truncation toward zero) without
     * any diagnostic. List initialization {3.9} is rejected at compile time
     * because it forbids narrowing -- that's exactly why we prefer {}.
     */
    return 0;
}
