// Exercise: this helper has the classic Cartesian-vs-array-index bug.
//
// The map is a 3x4 grid. The intent: tileAt(arr, x, y) returns the tile at
// Cartesian coordinate {x, y} -- x selects the COLUMN, y selects the ROW.
//
// The bug: `arr[x][y]` -- but the FIRST subscript selects the row!
// Cartesian {x, y} maps to arr[y][x].
//
// TODO:
//   1. Run it. tileAt(arr, 1, 2) prints 7 -- but x=1 (col 1), y=2 (row 2)
//      should be the tile 10 (row 2 = {9,10,11,12}, col 1).
//   2. Fix tileAt() to arr[y][x].
//   3. Print the full grid row-major (outer loop rows, inner loop cols).
//
// Expected final output:
//   Tile at (x=1, y=2): 10
//   1 2 3 4
//   5 6 7 8
//   9 10 11 12
#include <iostream>

int tileAt(const int arr[3][4], int x, int y)
{
    return arr[x][y]; // BUG: swaps row and column
}

int main()
{
    int arr[3][4]{
        { 1, 2, 3, 4 },
        { 5, 6, 7, 8 },
        { 9, 10, 11, 12 } };

    std::cout << "Tile at (x=1, y=2): " << tileAt(arr, 1, 2) << '\n';

    // TODO step 3: print the full grid row-major

    return 0;
}
