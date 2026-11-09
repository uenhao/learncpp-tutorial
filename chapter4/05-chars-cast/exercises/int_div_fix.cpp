// Exercise: fix the integer division from lesson 1.6 using static_cast.
// Expected outputs:
//   7 / 2 -> 3.5    (fix the FIRST division)
//   9 / 4 -> 2.25   (fix the SECOND division)
// Try a wrong version too: static_cast<double>(7 / 2) -- why is it still 3?
#include <iostream>

int main()
{
    int a{ 7 };
    int b{ 2 };

    std::cout << a / b << '\n'; // TODO: fix to print 3.5
    int c{ 9 };
    int d{ 4 };
    std::cout << c / d << '\n'; // TODO: fix to print 2.25
    return 0;
}
