// Standard library algorithms (18.3): find / find_if / count_if / sort / for_each.
#include <algorithm>
#include <array>
#include <iostream>
#include <string_view>

// A predicate: returns true if the element matches.
bool containsNut(std::string_view str)
{
    return str.find("nut") != std::string_view::npos;
}

// A comparison for std::sort: true if @a should be ordered before @b.
bool greater(int a, int b)
{
    return (a > b); // descending order
}

void doubleNumber(int& i)
{
    i *= 2;
}

int main()
{
    std::array arr{ 13, 90, 99, 5, 40, 80 };

    // find: iterator to the first match, or end() if not found.
    auto found{ std::find(arr.begin(), arr.end(), 99) };
    if (found != arr.end())
        std::cout << "Found " << *found << '\n';

    // find_if: first element for which the predicate returns true.
    std::array<std::string_view, 4> words{ "apple", "banana", "walnut", "lemon" };
    auto nut{ std::find_if(words.begin(), words.end(), containsNut) };
    if (nut != words.end())
        std::cout << "Found " << *nut << '\n';

    // count_if: how many elements match.
    std::array<std::string_view, 5> words2{ "apple", "banana", "walnut", "lemon", "peanut" };
    std::cout << "Counted " << std::count_if(words2.begin(), words2.end(), containsNut)
              << " nut(s)\n";

    // sort with a custom comparison (descending). The library also offers
    // std::greater{} -- note the braces: it's a type, so instantiate it.
    std::sort(arr.begin(), arr.end(), greater);
    for (int i : arr)
        std::cout << i << ' ';
    std::cout << '\n';

    // for_each: applies a function to every element (can't forget the &,
    // can't pass the wrong variable -- unlike a hand-written range-for).
    std::array ints{ 1, 2, 3, 4 };
    std::for_each(ints.begin(), ints.end(), doubleNumber);
    for (int i : ints)
        std::cout << i << ' ';
    std::cout << '\n';

    return 0;
}
