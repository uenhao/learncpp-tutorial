// Quiz Q9 experiment: pointer rebind vs reference fixed binding.
#include <iostream>

int main()
{
    int a{ 5 };
    int b{ 6 };
    int* ptr{ &a };
    *ptr = 10;
    ptr = &b;
    *ptr = 20;
    std::cout << a << ' ' << b << '\n'; // 10 20

    int& ref{ a };
    ref = b; // NOT a rebind: assigns b's value (20) to a!
    std::cout << a << ' ' << b << '\n'; // 20 20
    return 0;
}
