// Quiz solution: potion shop with enum-indexed constexpr arrays,
// static_assert guards, and a count enumerator.
// Note: the official 17.x Q2 additionally rejects any extraneous input
// (e.g. "2d") by peeking at the rest of the line; this solution reads one
// char at a time, so "25" would buy potion 2 and then reject the '5'.
#include <array>
#include <iostream>
#include <iterator> // for std::size
#include <limits>
#include <string_view>

namespace Potion
{
    enum Type
    {
        healing,
        mana,
        speed,
        invisibility,
        max_potions // count enumerator: 4
    };

    constexpr std::array types{ healing, mana, speed, invisibility };

    // Explicit element type so we don't need the sv suffix:
    constexpr std::array<std::string_view, max_potions> name{
        "healing", "mana", "speed", "invisibility" };
    constexpr std::array cost{ 20, 30, 12, 50 };

    // Compile-time guards: add a potion -> every array must follow.
    static_assert(std::size(types) == max_potions);
    static_assert(std::size(name) == max_potions);
    static_assert(std::size(cost) == max_potions);
}

int readPotionChoice() // returns Potion::Type as int, -1 for 'q' / invalid
{
    std::cout << "Enter the number of the potion you'd like to buy, or 'q' to quit: ";

    while (true)
    {
        char input{};
        std::cin >> input;

        if (!std::cin)
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }

        if (input == 'q')
            return -1;

        int val{ input - '0' };
        if (val >= 0 && val < Potion::max_potions)
            return val;

        std::cout << "I didn't understand what you said.  Try again: ";
    }
}

int main()
{
    constexpr int startingGold{ 100 };

    int gold{ startingGold };
    std::array<int, Potion::max_potions> inventory{};

    std::cout << "Welcome to Roscoe's potion emporium!  You have "
              << gold << " gold.\n\n";

    while (true)
    {
        std::cout << "Here is our selection for today:\n";

        for (auto p : Potion::types)
            std::cout << p << ") " << Potion::name[p]
                      << " costs " << Potion::cost[p] << '\n';

        int choice{ readPotionChoice() };
        if (choice == -1)
            break;

        auto type{ static_cast<Potion::Type>(choice) };
        if (gold < Potion::cost[type])
        {
            std::cout << "You can not afford that.\n\n";
            continue;
        }

        gold -= Potion::cost[type];
        ++inventory[type];
        std::cout << "You purchased a potion of " << Potion::name[type]
                  << ".  You have " << gold << " gold left.\n\n";
    }

    std::cout << "Your inventory contains:\n";
    for (auto p : Potion::types)
    {
        if (inventory[p] > 0)
            std::cout << inventory[p] << "x potion of " << Potion::name[p] << '\n';
    }
    std::cout << "You escaped with " << gold << " gold remaining.\n";

    return 0;
}
