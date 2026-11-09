// Solution for comment_fix.cpp
#include <iostream>

// Sum of two integers. Kept as a free function because lesson 2.2
// will reuse it when discussing return values.
int add(int a, int b)
{
    return a + b;
}

int main()
{
    std::cout << add(2, 3) << '\n';
    return 0;
}
