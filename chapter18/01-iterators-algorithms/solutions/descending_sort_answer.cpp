// Solution (official 18.1 quiz Q2): descending selection sort.
#include <iostream>
#include <iterator>
#include <utility>

int main()
{
    int array[]{ 30, 50, 20, 10, 40 };
    constexpr int length{ static_cast<int>(std::size(array)) };

    for (int startIndex{ 0 }; startIndex < length - 1; ++startIndex)
    {
        // largestIndex is the index of the largest element so far.
        int largestIndex{ startIndex };

        for (int currentIndex{ startIndex + 1 }; currentIndex < length; ++currentIndex)
        {
            // If the current element is larger than our found largest:
            if (array[currentIndex] > array[largestIndex])
                largestIndex = currentIndex;
        }

        // Swap our start element with our largest element.
        std::swap(array[startIndex], array[largestIndex]);
    }

    for (int index{ 0 }; index < length; ++index)
        std::cout << array[index] << ' ';
    std::cout << '\n';

    return 0;
}
