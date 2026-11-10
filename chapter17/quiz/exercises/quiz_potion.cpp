// Quiz exercise (flavor of official 17.x Q2): Roscoe's potion emporium,
// deterministic edition (fixed gold, no RNG -- the teaching points are
// enum-indexed constexpr arrays + static_assert guards).
//
// This starter wires everything with magic numbers and std::vector.
//
// TODO:
//   1. namespace Potion { enum Type { healing, mana, speed, invisibility, max_potions }; }
//   2. constexpr std::array types { healing, mana, speed, invisibility };
//      constexpr std::array<std::string_view, max_potions> name { "healing", "mana", "speed", "invisibility" };
//      constexpr std::array cost { 20, 30, 12, 50 };
//      plus THREE static_asserts tying each array's length to max_potions.
//   3. Print the shop list by looping over Potion::types (no magic numbers):
//        0) healing costs 20
//        1) mana costs 30
//        2) speed costs 12
//        3) invisibility costs 50
//   4. Buying loop: read a number (or 'q' to quit); subtract the cost from
//      gold, ++inventory[type]; print "You purchased a potion of <name>.
//      You have <gold> gold left." -- refuse if gold < cost.
//      Use a std::array<int, Potion::max_potions> for the inventory.
//
// Expected (input 2 0 q, starting gold 100; excerpt -- the actual program
// also prints a welcome line and the inventory list after quitting):
//   Here is our selection for today:
//   0) healing costs 20
//   1) mana costs 30
//   2) speed costs 12
//   3) invisibility costs 50
//   You purchased a potion of speed.  You have 88 gold left.
//   You purchased a potion of healing.  You have 68 gold left.
#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::vector<std::string> name{ "healing", "mana", "speed", "invisibility" };
    std::vector<int> cost{ 20, 30, 12, 50 };

    std::cout << "Here is our selection for today:\n";
    for (int i{ 0 }; i < 4; ++i) // magic number 4
        std::cout << i << ") " << name[i] << " costs " << cost[i] << '\n';

    // TODO: the purchase loop goes here

    return 0;
}
