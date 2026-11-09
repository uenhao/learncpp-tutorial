// The IOU from lesson 1.7: sort ANY number of people by height (desc).
// Uses two arrays + nested for loops (selection sort) -- no more
// hand-written swap chains!
// TODO 1: read n, then n pairs of (name height) into the arrays
// TODO 2: selection sort with nested for loops (hint: compare heights[i]
//         with every heights[j], j>i, swap when taller found)
// TODO 3: print the sorted list
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

    // TODO: read n pairs

    // TODO: sort (nested for + swap)

    // TODO: print

    return 0;
}
