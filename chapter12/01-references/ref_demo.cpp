// Reference demo: alias, modify through ref, same address.
#include <iostream>

void addOne(int& y) // y binds to the argument
{
    ++y;
}

int main()
{
    int x{ 5 };
    int& ref{ x };        // ref is an alias for x

    ref = 7;              // modifies x through the alias!
    std::cout << x << '\n'; // 7

    std::cout << &x << ' ' << &ref << '\n'; // same address

    addOne(x);            // pass by reference
    std::cout << x << '\n'; // 8
    return 0;
}
