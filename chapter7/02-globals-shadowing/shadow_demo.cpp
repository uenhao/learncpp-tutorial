// Shadowing demo (original lesson's apples example).
#include <iostream>

int main()
{ // outer block
    int apples{ 5 };

    { // nested block
        std::cout << apples << '\n'; // outer apples: 5

        int apples{ 0 }; // nested apples shadows outer from here

        apples = 10;
        std::cout << apples << '\n'; // 10 (nested)
    } // nested apples destroyed

    std::cout << apples << '\n'; // 5 (outer untouched)
    return 0;
}
