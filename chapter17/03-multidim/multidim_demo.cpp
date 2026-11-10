// Multidimensional arrays: C-style and nested std::array (alias template).
#include <array>
#include <iostream>
#include <iterator> // for std::size

// Alias template tames the nested-std::array syntax (17.13):
template <typename T, std::size_t Row, std::size_t Col>
using Array2d = std::array<std::array<T, Col>, Row>;

template <typename T, std::size_t Row, std::size_t Col>
void printArray(const Array2d<T, Row, Col>& arr)
{
    for (const auto& arow : arr)
    {
        for (const auto& e : arow)
            std::cout << e << ' ';
        std::cout << '\n';
    }
}

int main()
{
    // C-style 2D array: 3 rows x 4 cols, stored row-major (row 0 first).
    int carray[3][4]{
        { 1, 2, 3, 4 },
        { 5, 6, 7, 8 },
        { 9, 10, 11, 12 } };

    std::cout << "rows: " << std::size(carray)               // 3
              << "  cols: " << std::size(carray[0]) << '\n'; // 4

    // Cartesian {x=1, y=2} maps to arr[y][x] -- ROW first, column second!
    std::cout << "carray[2][1] = " << carray[2][1] << "  (x=1, y=2)\n"; // 10

    // Same shape via nested std::array. Note the template dims are
    // REVERSED vs indexing intuition: Array2d<int, 3, 4> = 3 rows, 4 cols.
    Array2d<int, 3, 4> arr{{
        { 1, 2, 3, 4 },
        { 5, 6, 7, 8 },
        { 9, 10, 11, 12 }}};

    printArray(arr);

    return 0;
}
