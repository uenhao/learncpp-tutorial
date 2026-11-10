// Timing your code (18.4): chrono Timer, selection sort vs std::sort.
#include <algorithm>
#include <array>
#include <chrono>
#include <cstddef> // for std::size_t
#include <iostream>
#include <numeric> // for std::iota

const int g_arrayElements{ 10000 };

class Timer
{
private:
    // Type aliases to make accessing nested types easier:
    using Clock = std::chrono::steady_clock;
    using Second = std::chrono::duration<double, std::ratio<1>>; // seconds as double

    std::chrono::time_point<Clock> m_beg{ Clock::now() };

public:
    void reset()
    {
        m_beg = Clock::now();
    }

    double elapsed() const
    {
        return std::chrono::duration_cast<Second>(Clock::now() - m_beg).count();
    }
};

void selectionSort(std::array<int, g_arrayElements>& array)
{
    for (std::size_t startIndex{ 0 }; startIndex < (g_arrayElements - 1); ++startIndex)
    {
        std::size_t smallestIndex{ startIndex };

        for (std::size_t currentIndex{ startIndex + 1 }; currentIndex < g_arrayElements;
             ++currentIndex)
        {
            if (array[currentIndex] < array[smallestIndex])
                smallestIndex = currentIndex;
        }

        std::swap(array[startIndex], array[smallestIndex]);
    }
}

int main()
{
    std::array<int, g_arrayElements> array;
    std::iota(array.rbegin(), array.rend(), 1); // fill with 10000 down to 1

    Timer t;
    selectionSort(array);
    std::cout << "Selection sort: " << t.elapsed() << " seconds\n";

    std::iota(array.rbegin(), array.rend(), 1); // scramble it again

    t.reset();
    std::sort(array.begin(), array.end());
    std::cout << "std::sort:      " << t.elapsed() << " seconds\n";

    return 0;
}
