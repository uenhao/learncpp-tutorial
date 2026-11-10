// Exercise (official 18.1 quiz Q2): make the selection sort DESCENDING.
//
// TODO (keep everything else identical):
//   1. In the inner loop, track the LARGEST element instead of the smallest:
//      rename smallestIndex to largestIndex and flip the comparison < to >.
//   2. Update the swap and comments to match.
//
// Expected output:
//   50 40 30 20 10
#include <iostream>
#include <iterator>
#include <utility>

int main()
{
    int array[]{ 30, 50, 20, 10, 40 };
    constexpr int length{ static_cast<int>(std::size(array)) };

    for (int startIndex{ 0 }; startIndex < length - 1; ++startIndex)
    {
        int smallestIndex{ startIndex }; // TODO: rename to largestIndex

        for (int currentIndex{ startIndex + 1 }; currentIndex < length; ++currentIndex)
        {
            if (array[currentIndex] < array[smallestIndex]) // TODO: flip to >
                smallestIndex = currentIndex;
        }

        std::swap(array[startIndex], array[smallestIndex]);
    }

    for (int index{ 0 }; index < length; ++index)
        std::cout << array[index] << ' ';
    std::cout << '\n';

    return 0;
}
