// Exercise: this findMax() compiles and passes the first test -- but it is
// WRONG for arrays whose values are all negative.
//
//   data1 { 84, 92, 76, 81, 56 }        -> 92   (correct)
//   data2 { -13.0, -26.7, -105.5, -14.8 } -> 0  (wrong! should be -13)
//
// TODO:
//   1. Fix findMax(): start from the FIRST ELEMENT instead of a
//      value-initialized T{} (which is 0 / 0.0), then compare the rest.
//      Careful: an empty array must still return T{} (element count 0).
//   2. Switch both loops in main() over to range-based for
//      (the array is only being traversed -- prefer no indexing).
//
// Expected output after the fix:
//   92
//   -13
//   0        (empty vector -> T{} default value)
#include <iostream>
#include <vector>

template <typename T>
T findMax(const std::vector<T>& arr)
{
    T max{}; // BUG: 0 is not a safe starting point for all-negative arrays

    for (std::size_t index{ 0 }; index < arr.size(); ++index)
    {
        if (arr[index] > max)
            max = arr[index];
    }

    return max;
}

int main()
{
    std::vector data1{ 84, 92, 76, 81, 56 };
    std::cout << findMax(data1) << '\n';

    std::vector data2{ -13.0, -26.7, -105.5, -14.8 };
    std::cout << findMax(data2) << '\n';

    std::vector<int> data3{};
    std::cout << findMax(data3) << '\n';

    return 0;
}
