// Reads 3 (name, height) pairs and prints them sorted by height,
// descending. Only chapter-1 tools are used: variables, if, swap.
#include <iostream>
#include <string>

int main()
{
    std::cout << "Enter 3 names and heights (cm), e.g. Tom 180:\n";

    std::string name1{}, name2{}, name3{};
    int height1{}, height2{}, height3{};

    std::cin >> name1 >> height1 >> name2 >> height2 >> name3 >> height3;

    // Bubble the tallest into slot 1, then the taller of the rest into 2.
    if (height1 < height2)
    {
        std::swap(name1, name2);
        std::swap(height1, height2);
    }
    if (height2 < height3)
    {
        std::swap(name2, name3);
        std::swap(height2, height3);
    }
    if (height1 < height2)
    {
        std::swap(name1, name2);
        std::swap(height1, height2);
    }

    std::cout << "\nSorted by height (tallest first):\n";
    std::cout << name1 << " " << height1 << '\n';
    std::cout << name2 << " " << height2 << '\n';
    std::cout << name3 << " " << height3 << '\n';
    return 0;
}
