// Solution for uninit_fix.cpp: no UB left.
#include <iostream>

int main()
{
    int total{};     // value-initialized to 0 before any use
    int count{ 3 };
    int bonus{ 10 }; // give the bonus an explicit value

    total = count + bonus;

    std::cout << "total = " << total << '\n'; // stable: 13 every run
    return 0;
}
