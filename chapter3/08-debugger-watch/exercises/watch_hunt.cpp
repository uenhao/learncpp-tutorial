// Watch hunt: sum of 1..5 should be 15; program prints wrong value.
// Rules: NO print statements. Use LOCALS/WATCH + stepping only.
#include <iostream>

int adjust(int v)
{
    return v - 1; // suspicious? verify with the debugger
}

int main()
{
    int sum{ 0 };
    for (int i{ 1 }; i <= 5; ++i)
    {
        sum = sum + adjust(i);
    }
    std::cout << "sum = " << sum << '\n';
    return 0;
}
