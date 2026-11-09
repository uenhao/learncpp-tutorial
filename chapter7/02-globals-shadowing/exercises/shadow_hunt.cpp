// Exercise: this program has 3 shadowing problems. Compile with
//   g++ -std=c++20 -Wall -Wextra -Wshadow -o hunt shadow_hunt.cpp
// and fix each warning by renaming inner variables (no behavior change).
#include <iostream>

int total{ 0 }; // global: count of items processed

void process(int total) // shadows the global total? check with -Wshadow
{
    total = total + 1;
    std::cout << "processing " << total << '\n';
}

int main()
{
    int items{ 3 };
    {
        int items{ 5 }; // shadows outer items
        std::cout << "inner items: " << items << '\n';
    }
    process(items);

    for (int i{ 0 }; i < items; ++i)
    {
        int items{ 9 }; // shadows again
        std::cout << "loop items: " << items << '\n';
    }
    std::cout << "global-ish total: " << total << '\n';
    return 0;
}
