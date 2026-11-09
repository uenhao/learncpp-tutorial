// Quiz Q9 experiment: robust retry with failure prints.
#include <iostream>
#include <limits>

void ignoreLine()
{
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

double getDouble()
{
    while (true)
    {
        std::cout << "Enter: ";
        double x{};
        std::cin >> x;
        if (!std::cin)
        {
            std::cin.clear();
            ignoreLine();
            std::cout << x << ' '; // print x after failure (0 per C++11)
            continue;
        }
        ignoreLine();
        std::cout << x;
        return x;
    }
}

int main()
{
    getDouble(); // try: a, b, 3
    std::cout << '\n';
    return 0;
}
