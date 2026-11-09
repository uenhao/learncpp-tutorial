// Solution for variable_basics.cpp
#include <iostream>

int main()
{
    int x{ 1 };
    std::cout << "outer x = " << x << '\n';

    {
        int x{ 99 }; // different object that shadows the outer x
        int innerVal{ 7 };
        std::cout << "inner x = " << x << '\n';
        (void)innerVal; // scoped to this block only
    }

    std::cout << "outer x again = " << x << '\n'; // still 1

    int score{ 95 };
    std::cout << "score = " << score << '\n';
    score = 88; // assignment replaces the value
    std::cout << "score = " << score << '\n';
    return 0;
}
