// Arrays + loops + templates = scalability: one function, any element type.
#include <iostream>
#include <vector>

// Function template: works for any element type T that supports + and /.
template <typename T>
T calculateAverage(const std::vector<T>& arr)
{
    std::size_t length{ arr.size() };

    T average{}; // average has the same type as the elements
    for (std::size_t index{ 0 }; index < length; ++index)
        average += arr[index];
    average /= static_cast<int>(length); // the count is integral in nature

    return average;
}

int main()
{
    std::vector class1{ 84, 92, 76, 81, 56 };
    std::cout << "The class 1 average is: " << calculateAverage(class1) << '\n'; // 77

    std::vector class2{ 93.2, 88.6, 64.2, 81.0 };
    std::cout << "The class 2 average is: " << calculateAverage(class2) << '\n'; // 81.75

    return 0;
}
