// Quiz exercise (official 16.x Q2): inventory with enum-indexed vector.
// The starter uses magic numbers 0/1/2 -- the meaning of each slot lives
// only in comments.
//
// TODO:
//   1. Define `namespace Items { enum Type { health_potion, torch, arrow, max_items }; }`
//      (a count enumerator!).
//   2. Keep the vector, but assert(std::size(inventory) == Items::max_items);
//      so the initializer list can never silently drift out of sync.
//   3. Rewrite countTotalItems() to sum with a range-based for loop.
//   4. BONUS (official step 2): print each line with correct plurals:
//        You have 1 health potion
//        You have 5 torches
//        You have 10 arrows
//        You have 16 total items
//      (enum types can't be iterated by range-based for -- use a normal
//      for loop and static_cast<Items::Type>(i).)
//
// Expected output (starter):
//   You have 16 total items
#include <iostream>
#include <vector>

int countTotalItems(const std::vector<int>& inventory)
{
    int sum{ 0 };
    sum += inventory[0]; // magic number: what is element 0 again?
    sum += inventory[1];
    sum += inventory[2];
    return sum;
}

int main()
{
    std::vector inventory{ 1, 5, 10 }; // potion? torch? arrow? who knows

    std::cout << "You have " << countTotalItems(inventory) << " total items\n";

    return 0;
}
