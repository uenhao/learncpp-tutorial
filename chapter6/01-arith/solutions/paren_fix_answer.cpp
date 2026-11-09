// Solution for paren_fix.cpp
#include <iostream>

int main()
{
    int x{ 5 };
    int y{ 7 };

    // Fix 1: parentheses (or simply use the inverse comparison)
    if (!(x > y))
        std::cout << "1: x is not greater\n";
    else
        std::cout << "1: x is greater\n";

    int a{ 0 };
    int b{ 3 };
    // Fix 2: (b == 0 == false) parsed as ((b==0)==false) -> (false==false)=true!
    // Chain-comparing bools against numbers is nonsense. Write the intent:
    if (a == 0 || b == 0)
        std::cout << "2: some zero found\n";
    else
        std::cout << "2: no zeros\n";
    return 0;
}
