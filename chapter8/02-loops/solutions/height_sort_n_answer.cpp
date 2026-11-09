// Solution: selection sort with loops -- the 100-person IOU paid in full.
#include <iostream>
#include <string>
#include <utility>

int main()
{
    std::cout << "How many people? ";
    int n{};
    std::cin >> n;

    std::string names[100]{};
    int heights[100]{};

    for (int i{ 0 }; i < n; ++i)
        std::cin >> names[i] >> heights[i];

    for (int i{ 0 }; i < n; ++i)
        for (int j{ i + 1 }; j < n; ++j)
            if (heights[j] > heights[i])
            {
                std::swap(names[i], names[j]);
                std::swap(heights[i], heights[j]);
            }

    for (int i{ 0 }; i < n; ++i)
        std::cout << names[i] << ' ' << heights[i] << '\n';
    return 0;
}
