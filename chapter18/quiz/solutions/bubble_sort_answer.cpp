// Quiz solution (official 18.1 quiz Q3): bubble sort.
// Official Q4 optimizations (not implemented here): shrink the scanned
// range each pass (endOfArrayIndex = length - iteration) and break early
// when a pass performs no swaps (bool swapped).
#include <iostream>
#include <iterator>
#include <utility>

int main()
{
    int array[]{ 6, 3, 2, 9, 7, 1, 5, 4, 8 };
    constexpr int length{ static_cast<int>(std::size(array)) };

    // Step through each element of the array except the last (it ends up
    // sorted by the time we get to it).
    for (int iteration{ 0 }; iteration < length - 1; ++iteration)
    {
        // Compare every adjacent pair; the last element has no pair.
        for (int currentIndex{ 0 }; currentIndex < length - 1; ++currentIndex)
        {
            // If the current element is larger than the one after it, swap.
            if (array[currentIndex] > array[currentIndex + 1])
                std::swap(array[currentIndex], array[currentIndex + 1]);
        }
    }

    for (int index{ 0 }; index < length; ++index)
        std::cout << array[index] << ' ';
    std::cout << '\n';

    return 0;
}
