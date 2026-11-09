// Solution for validate_age.cpp
#include <iostream>
#include <limits>

void ignoreLine()
{
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int getAge()
{
    while (true)
    {
        std::cout << "Enter your age (1-120): ";
        int age{};
        std::cin >> age;

        if (!std::cin) // extraction failed (letters etc.)
        {
            std::cin.clear();
            ignoreLine();
            std::cerr << "That is not a number. Try again.\n";
            continue;
        }

        ignoreLine();

        if (age < 1 || age > 120) // extraction ok, value bad
        {
            std::cerr << "Out of range. Try again.\n";
            continue;
        }

        return age;
    }
}

int main()
{
    int age{ getAge() };
    std::cout << "age = " << age << '\n';
    return 0;
}
