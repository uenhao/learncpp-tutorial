// Solution for height_sort4.cpp.
#include <iostream>
#include <string>

// Swaps both the name and the height of slots i and j.
// (Chapter 2 will turn this into a proper function.)
void swapPair(std::string& nameA, int& heightA, std::string& nameB, int& heightB)
{
    std::swap(nameA, nameB);
    std::swap(heightA, heightB);
}

int main()
{
    std::string n1{}, n2{}, n3{}, n4{};
    int h1{}, h2{}, h3{}, h4{};

    std::cin >> n1 >> h1 >> n2 >> h2 >> n3 >> h3 >> n4 >> h4;

    if (h1 < h2) swapPair(n1, h1, n2, h2);
    if (h2 < h3) swapPair(n2, h2, n3, h3);
    if (h3 < h4) swapPair(n3, h3, n4, h4);
    if (h1 < h2) swapPair(n1, h1, n2, h2);
    if (h2 < h3) swapPair(n2, h2, n3, h3);
    if (h1 < h2) swapPair(n1, h1, n2, h2);

    std::cout << n1 << ' ' << h1 << '\n'
              << n2 << ' ' << h2 << '\n'
              << n3 << ' ' << h3 << '\n'
              << n4 << ' ' << h4 << '\n';

    /*
     * Answers:
     * 1. Going from 3 to 4 people grows the swap chain from 3 ifs to
     *    6 ifs -- roughly quadratic growth (n*(n-1)/2 comparisons).
     * 2. For 100 people this is unmanageable: 4950 hand-written ifs.
     *    We want loops (chapter 5) to repeat comparisons and
     *    containers like std::vector (chapter 17) to hold any number
     *    of pairs. std::sort then does the whole job in one line.
     */
    return 0;
}
