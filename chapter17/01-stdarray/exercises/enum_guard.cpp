// Exercise: experience the static_assert guard on enum-indexed arrays.
//
// Do these steps IN ORDER, rebuilding after each:
//   1. Add `penguin,` to the enum (before max_animals) and rebuild WITHOUT
//      touching anything else. Read the compile error: the static_assert
//      just caught a missing initializer at COMPILE time (a std::vector
//      version could only catch this at runtime, if ever).
//   2. Fix it: add the penguin's leg count to the initializer list.
//      The guard should pass again.
//   3. Print the penguin's leg count in main().
//
// Expected final output:
//   A cat has 4 legs.
//   A penguin has 2 legs.
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
        max_animals
    };

    constexpr std::array legs{ 2, 4, 4, 4, 2, 0 };

    // constexpr length check: initializer count must match the enum.
    static_assert(std::size(legs) == max_animals);
}

int main()
{
    std::cout << "A cat has " << Animals::legs[Animals::cat] << " legs.\n";
    // TODO step 3: print the penguin's leg count here

    return 0;
}
