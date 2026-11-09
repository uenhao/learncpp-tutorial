// Robust input: retry loop + clear + ignoreLine (original lesson's getDouble).
#include <iostream>
#include <limits>

void ignoreLine()
{
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

double getDouble()
{
    while (true) // loop until user enters valid input
    {
        std::cout << "Enter a decimal number: ";
        double x{};
        std::cin >> x;

        if (!std::cin) // extraction failed?
        {
            std::cin.clear(); // put cin back in normal mode (FIRST!)
            ignoreLine();     // then remove the bad input
            std::cerr << "Invalid input, try again.\n";
            continue;
        }

        ignoreLine(); // discard any extra input on the line
        return x;
    }
}

int main()
{
    double x{ getDouble() };
    std::cout << "You entered " << x << '\n';
    return 0;
}
