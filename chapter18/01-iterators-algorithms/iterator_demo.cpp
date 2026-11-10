// Iterators (18.2): begin/end, one-past-the-end, invalidation and the fix.
#include <array>
#include <iostream>
#include <iterator>
#include <vector>

int main()
{
    std::array arr{ 0, 1, 2, 3, 4, 5, 6 };

    // Pointers are the simplest iterators: ++ moves, * accesses.
    auto begin{ &arr[0] };
    auto end{ begin + std::size(arr) }; // one-past-the-end (never dereferenced!)
    for (auto ptr{ begin }; ptr != end; ++ptr)
        std::cout << *ptr << ' ';
    std::cout << '\n';

    // The same loop through the container's begin()/end() member functions.
    // (Iterators use != rather than <: some iterator types can't be
    // relationally compared, but != works with all of them.)
    for (auto p{ arr.begin() }; p != arr.end(); ++p)
        std::cout << *p << ' ';
    std::cout << '\n';

    // Iterator invalidation: erase() invalidates the erased element's
    // iterator (and those after it). Use its return value -- an iterator
    // to the element after the erased one.
    std::vector v{ 1, 2, 3, 4, 5, 6, 7 };
    auto it{ v.begin() };
    ++it;
    std::cout << *it << '\n'; // 2
    it = v.erase(it);         // erase 2; it now points at 3
    std::cout << *it << '\n'; // 3 (safe because we reassigned)

    // Note: pushing into a vector while a range-based for is iterating it
    // can reallocate and invalidate everything -- also undefined behavior.

    return 0;
}
