// Solution: Cartesian {x, y} -> arr[y][x]; grid printed row-major.
#include <iostream>
#include <iterator> // for std::size

int tileAt(const int arr[3][4], int x, int y)
{
    return arr[y][x]; // first subscript = row (y), second = column (x)
}

int main()
{
    int arr[3][4]{
        { 1, 2, 3, 4 },
        { 5, 6, 7, 8 },
        { 9, 10, 11, 12 } };

    std::cout << "Tile at (x=1, y=2): " << tileAt(arr, 1, 2) << '\n'; // 10

    for (std::size_t row{ 0 }; row < std::size(arr); ++row)
    {
        for (std::size_t col{ 0 }; col < std::size(arr[0]); ++col)
            std::cout << arr[row][col] << ' ';
        std::cout << '\n';
    }

    return 0;
}
