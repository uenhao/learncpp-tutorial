// Range-based for (for-each): no index, no off-by-one, no sign conversion.
// Watch the element declaration: auto copies, auto& modifies, const auto& reads.
#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::vector fibonacci{ 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89 };

    for (int num : fibonacci) // each element is COPIED into num
        std::cout << num << ' ';
    std::cout << '\n';

    std::vector<std::string> words{ "peter", "likes", "frozen", "yogurt" };

    for (auto& word : words) // reference: modifies the original elements
        word[0] = 'P';

    for (const auto& word : words) // const reference: read without copying
        std::cout << word << ' ';
    std::cout << '\n';

    return 0;
}
