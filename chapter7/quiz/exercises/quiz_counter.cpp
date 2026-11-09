// Quiz Q9 experiment: static vs automatic lifetimes side by side.
#include <iostream>

void stat()
{
    static int s{ 0 };
    ++s;
    std::cout << s << ' ';
}

void auto_()
{
    int a{ 0 };
    ++a;
    std::cout << a << ' ';
}

int main()
{
    stat(); stat(); stat(); auto_(); auto_();
    std::cout << '\n';
    return 0;
}
