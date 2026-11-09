// Solution for sign_classify.cpp
#include <iostream>

int main()
{
    std::cout << "Enter an integer: ";
    int x{};
    std::cin >> x;

    if (x < 0)
    {
        std::cout << "negative\n";
    }
    else if (x == 0)
    {
        std::cout << "zero\n";
    }
    else if (x <= 100)
    {
        std::cout << "small positive\n";
    }
    else
    {
        std::cout << "large positive\n";
    }
    return 0;
}
