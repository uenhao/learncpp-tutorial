// Solution: no shadowing, identical behavior.
#include <iostream>

int total{ 0 };

void process(int count) // renamed: no longer shadows global 'total'
{
    total = total + 1;
    std::cout << "processing " << count << '\n';
}

int main()
{
    int items{ 3 };
    {
        int innerItems{ 5 }; // renamed
        std::cout << "inner items: " << innerItems << '\n';
    }
    process(items);

    for (int i{ 0 }; i < items; ++i)
    {
        int loopItem{ 9 }; // renamed
        std::cout << "loop items: " << loopItem << '\n';
    }
    std::cout << "global-ish total: " << total << '\n';
    return 0;
}
