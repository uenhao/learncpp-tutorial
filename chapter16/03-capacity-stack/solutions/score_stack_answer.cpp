// Solution: unknown count -> push_back into an empty vector, no index needed.
#include <iostream>
#include <limits>
#include <vector>

int main()
{
    std::vector<int> scores{};

    while (true)
    {
        std::cout << "Enter a score (or -1 to finish): ";
        int x{};
        std::cin >> x;

        if (!std::cin) // repair bad input (chapter 9)
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }

        if (x == -1)
            break;

        scores.push_back(x); // grows the vector as needed
    }

    std::cout << "Your scores: ";
    for (const auto& score : scores)
        std::cout << score << ' ';
    std::cout << '\n';

    return 0;
}
