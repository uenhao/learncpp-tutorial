// if demo: zero / positive / negative classification with an else-if chain.
#include <iostream>

int main()
{
    std::cout << "Enter an integer: ";
    int x{};
    std::cin >> x;

    if (x == 0)
    {
        std::cout << "zero\n";
    }
    else if (x > 0)
    {
        std::cout << "positive\n";
    }
    else
    {
        std::cout << "negative\n";
    }
    return 0;
}
