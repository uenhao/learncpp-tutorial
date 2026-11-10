// Solution: references make swap trivial.
#include <iostream>

void mySwap(int& a, int& b)
{
    int temp{ a };
    a = b;
    b = temp;
}

int main()
{
    int a{ 1 };
    int b{ 2 };
    mySwap(a, b);
    std::cout << a << ' ' << b << '\n'; // 2 1
    return 0;
}
