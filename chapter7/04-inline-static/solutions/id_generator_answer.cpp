// Solution: static local as a unique ID generator (original lesson's use).
#include <iostream>

int generateID()
{
    static int s_itemID{ 0 };
    return s_itemID++; // returns old value, increments stored one
}

int main()
{
    for (int i{ 0 }; i < 5; ++i)
        std::cout << generateID() << ' '; // 0 1 2 3 4
    std::cout << '\n';
    return 0;
}
