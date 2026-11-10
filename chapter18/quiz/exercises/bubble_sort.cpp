// Quiz exercise (official 18.1 quiz Q3): bubble sort.
//
// Bubble sort compares ADJACENT pairs: if array[i] > array[i+1], swap.
// One full pass bubbles the largest element to the end of the array.
//
// TODO: implement bubble sort:
//   - outer loop: length-1 iterations (each pass sorts one element)
//   - inner loop: for i in [0, length-1), compare array[i] with
//     array[i+1] and swap when out of order (mind the range -- the last
//     element has no pair!)
//   (Official Q4 adds two optimizations: shrink the scanned range each
//   pass, and stop early when a pass performs no swaps.)
//
// Expected output:
//   1 2 3 4 5 6 7 8 9
#include <iostream>
#include <iterator>
#include <utility>

int main()
{
    int array[]{ 6, 3, 2, 9, 7, 1, 5, 4, 8 };
    constexpr int length{ static_cast<int>(std::size(array)) };

    // TODO: bubble sort here

    for (int index{ 0 }; index < length; ++index)
        std::cout << array[index] << ' ';
    std::cout << '\n';

    return 0;
}
