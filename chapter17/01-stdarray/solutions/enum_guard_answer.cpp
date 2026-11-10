// Solution: penguin added; the static_assert guard passed again because the
// initializer list was updated in the same edit.
#include <array>
#include <iostream>
#include <iterator> // for std::size

namespace Animals
{
    enum Type
    {
        chicken,
        dog,
        cat,
        elephant,
        duck,
        snake,
        penguin, // new
        max_animals
    };

    constexpr std::array legs{ 2, 4, 4, 4, 2, 0, 2 };

    static_assert(std::size(legs) == max_animals);
}

int main()
{
    std::cout << "A cat has " << Animals::legs[Animals::cat] << " legs.\n";
    std::cout << "A penguin has " << Animals::legs[Animals::penguin] << " legs.\n";

    return 0;
}
