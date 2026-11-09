// Simple program useful when comparing Debug vs Release builds.
// Tip: set a breakpoint on main and step through in Debug mode.
#include <iostream>

int square(int x)
{
    return x * x;
}

int main()
{
    int width{ 5 };
    int height{ 8 };
    int area{ square(width * height / 2) };

    std::cout << "width  = " << width << '\n';
    std::cout << "height = " << height << '\n';
    std::cout << "area   = " << area << '\n';
    std::cout << "main is at address " << reinterpret_cast<void*>(main) << '\n';
    return 0;
}
