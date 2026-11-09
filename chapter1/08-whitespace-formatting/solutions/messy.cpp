// Solution for messy.cpp: formatted for readability.
#include <iostream>

int main()
{
    int a{ 5 };
    int b{ 7 };

    std::cout << "sum = " << a + b << '\n';
    std::cout << "msg = "
              << "two lines"; // long line split at << operator, string kept whole
    return 0;
}
