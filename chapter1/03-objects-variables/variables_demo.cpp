// Objects and variables demo.
#include <iostream>

int main()
{
    int width;   // define: allocates storage, names it width, type int
    width = 10;  // assignment: replaces the value held

    int height{ 3 }; // definition with initializer (see lesson 1.4)
    int area{ width * height };

    std::cout << "width  = " << width << '\n';
    std::cout << "height = " << height << '\n';
    std::cout << "area   = " << area << '\n';
    return 0;
}
