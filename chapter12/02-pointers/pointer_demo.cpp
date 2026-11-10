// Pointer demo: address-of, dereference, rebind, null.
#include <iostream>

int main()
{
    int x{ 5 };
    int* ptr{ &x };          // ptr holds address of x

    std::cout << *ptr << '\n'; // 5 (dereference)
    *ptr = 7;                  // modify x through ptr
    std::cout << x << '\n';    // 7

    int y{ 6 };
    ptr = &y;                  // rebind to y (references can't do this)
    std::cout << *ptr << '\n'; // 6

    int* np{ nullptr };        // null pointer
    if (!np)
        std::cout << "np is null\n";
    return 0;
}
