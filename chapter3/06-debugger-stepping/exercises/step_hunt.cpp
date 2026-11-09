// Step-hunting exercise: expected "double 21 = 42", program prints 31.
// Rules: use ONLY the debugger (F10/F11/watch). No print statements!
// Find the faulty line by stepping INTO the functions.
#include <iostream>

int triple(int x)
{
    return x + x + x;
}

int readNumber(int n)
{
    return n; // input comes from argv-style constant below
}

int main()
{
    int n{ 21 };
    int result{ triple(readNumber(n)) / 2 }; // one operator here is wrong
    std::cout << "double 21 = " << result << '\n';
    return 0;
}
