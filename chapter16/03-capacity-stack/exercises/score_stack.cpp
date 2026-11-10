// Exercise (flavor of official 16.11): the count is unknown in advance!
// This starter pre-allocates 3 slots -- too few for 4 scores, wasteful for 1.
//
// TODO: rewrite with stack behavior (keep the same final output):
//   1. Start with an EMPTY vector: std::vector<int> scores{};
//   2. Read scores in a loop until the user enters -1; push each valid
//      score with scores.push_back(x) (chapter-9-style input repair on
//      failure: std::cin.clear() + std::cin.ignore(...)).
//   3. Print the collected scores with a range-based for loop
//      (traversal only -- no indexing).
//
// Expected (input 88 95 70 -1):
//   Your scores: 88 95 70
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> scores(3); // fixed 3 slots -- the thing we want to remove

    std::cout << "Enter 3 scores: ";
    std::cin >> scores[0] >> scores[1] >> scores[2];

    std::cout << "Your scores: ";
    for (std::size_t i{ 0 }; i < scores.size(); ++i)
        std::cout << scores[i] << ' ';
    std::cout << '\n';

    return 0;
}
