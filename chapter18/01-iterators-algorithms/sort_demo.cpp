// Selection sort (18.1): find the smallest, swap it to the front, repeat.
#include <iostream>
#include <iterator>
#include <utility>

int main()
{
    int array[]{ 30, 50, 20, 10, 40 };
    constexpr int length{ static_cast<int>(std::size(array)) };

    // The last element is already in place by the time we get there
    // (the final comparison would be a self-swap), so stop one before the end.
    for (int startIndex{ 0 }; startIndex < length - 1; ++startIndex)
    {
        // Assume the first element of the unsorted part is the smallest,
        // then look for a smaller one in the rest.
        int smallestIndex{ startIndex };

        for (int currentIndex{ startIndex + 1 }; currentIndex < length; ++currentIndex)
        {
            if (array[currentIndex] < array[smallestIndex])
                smallestIndex = currentIndex;
        }

        // Sort the smallest element into its correct place.
        std::swap(array[startIndex], array[smallestIndex]);
    }

    for (int index{ 0 }; index < length; ++index)
        std::cout << array[index] << ' ';
    std::cout << '\n';

    return 0;
}
