// Solution: seed max with the first element; empty array -> T{}.
// Loops switched to range-based for (traversal only, no indexing needed).
#include <iostream>
#include <vector>

template <typename T>
T findMax(const std::vector<T>& arr)
{
    const std::size_t length{ arr.size() };

    if (length == 0)
        return T{};

    T max{ arr[0] }; // a real element is always a safe starting point

    for (std::size_t index{ 1 }; index < length; ++index)
    {
        if (arr[index] > max)
            max = arr[index];
    }

    return max;
}

int main()
{
    std::vector data1{ 84, 92, 76, 81, 56 };
    std::cout << findMax(data1) << '\n'; // 92

    std::vector data2{ -13.0, -26.7, -105.5, -14.8 };
    std::cout << findMax(data2) << '\n'; // -13

    std::vector<int> data3{};
    std::cout << findMax(data3) << '\n'; // 0

    return 0;
}
