// Initialization styles demo.
#include <iostream>

int main()
{
    int copyInit = 5;    // copy initialization
    int directInit(7);   // direct initialization
    int listInit{ 9 };   // list initialization (preferred)

    std::cout << copyInit << ' ' << directInit << ' ' << listInit << '\n';

    int value{ 10 };
    value = 20;          // assignment after creation
    std::cout << "value = " << value << '\n';

    // int narrowed{ 3.5 }; // uncomment: compile error, narrowing forbidden
    int truncated = 3.5;   // compiles but silently truncates to 3!
    std::cout << "truncated = " << truncated << '\n';
    return 0;
}
