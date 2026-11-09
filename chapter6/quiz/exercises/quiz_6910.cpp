// Quiz experiments for Q9 (chained comparison) and Q10 (! precedence).
#include <iostream>

int main()
{
    int x{ 5 };

    // Q9: "x in [1,10]" written math-style -- what does it actually test?
    std::cout << "1 <= x == 10 : " << (1 <= x == 10) << '\n'; // (1<=5)==10 -> 1==10 -> 0!
    std::cout << "x>=1 && x<=10 : " << (x >= 1 && x <= 10) << '\n'; // 1

    // Q10: ! precedence
    int y{ 7 };
    if (!x > y)
        std::cout << "no\n";
    else
        std::cout << "yes\n"; // (!5)=0 > 7 is false -> else
    return 0;
}
