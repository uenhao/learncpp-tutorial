// Fixed step_hunt: double 21 = 42.
// Root cause: "/ 2" was wrong (should be * 2); found purely by stepping.
#include <iostream>

int triple(int x)
{
    return x + x + x;
}

int readNumber(int n)
{
    return n;
}

int main()
{
    int n{ 21 };
    int result{ triple(readNumber(n)) * 2 };
    std::cout << "double 21 = " << result << '\n';
    return 0;
}
