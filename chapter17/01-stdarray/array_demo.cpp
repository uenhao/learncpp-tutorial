// std::array: fixed length, constexpr-friendly, compile-time-checked indexing.
#include <array>
#include <iostream>
#include <iterator> // for std::size

struct House
{
    int number{};
    int stories{};
    int roomsPerStory{};
};

int main()
{
    // CTAD deduces both element type AND length from the initializer:
    constexpr std::array prime{ 2, 3, 5, 7, 11 }; // std::array<int, 5>

    // Length is constexpr -- works even on non-constexpr arrays:
    constexpr int length{ std::size(prime) };
    std::cout << "length: " << length << '\n';

    // std::get<I> takes a constexpr index: out-of-range = compile error.
    std::cout << std::get<3>(prime) << '\n'; // 7
    // std::get<9>(prime); // compile error: static_assert inside

    // Elements of class type: name each element's type (brace elision
    // then lets us use single braces + CTAD):
    constexpr std::array houses{
        House{ 13, 1, 7 },
        House{ 14, 2, 5 },
        House{ 15, 2, 4 },
    };

    for (const auto& house : houses)
        std::cout << "House " << house.number << ": "
                  << house.stories * house.roomsPerStory << " rooms\n";

    return 0;
}
