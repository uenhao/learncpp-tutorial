// Solution for expression_quiz.cpp
#include <iostream>

int main()
{
    int a{ 7 };
    int b{ 2 };

    std::cout << "E1: " << a + b * 3 << '\n';   // 13 (* before +)
    std::cout << "E2: " << (a + b) * 3 << '\n'; // 27
    std::cout << "E3: " << a - b - 1 << '\n';   // 4 (left-to-right)
    std::cout << "E4: " << a / b << '\n';       // 3 -- integer division!
    std::cout << "E5: " << a % b << '\n';       // 1 (remainder)

    /*
     * TODO 2: int / int performs integer division: the fractional part
     * is discarded (truncated toward zero), so 7/2 == 3, not 3.5.
     * To get 3.5 at least one operand must be floating point,
     * e.g. static_cast<double>(a) / b (casting is covered in chapter 4).
     */
    return 0;
}
