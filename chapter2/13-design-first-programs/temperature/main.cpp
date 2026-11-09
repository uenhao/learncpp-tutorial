// Temperature converter: design walkthrough in README.md.
#include <iostream>
#include "convert.h"

int main()
{
    std::cout << "Enter temperature and unit (F or C), e.g. 100 C: ";

    double temp{};
    char unit{};
    std::cin >> temp >> unit;

    if (unit == 'F' || unit == 'f')
        std::cout << temp << "F = " << fahrenheitToCelsius(temp) << "C\n";
    else if (unit == 'C' || unit == 'c')
        std::cout << temp << "C = " << celsiusToFahrenheit(temp) << "F\n";
    else
        std::cout << "Unknown unit: " << unit << '\n';

    return 0;
}
