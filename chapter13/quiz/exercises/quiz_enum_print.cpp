// Quiz Q10 experiment: enum class cannot print directly.
#include <iostream>

enum class Color { red, green, blue };

int main()
{
    Color c{ Color::blue };
    // std::cout << c << '\n';      // uncomment: compile error!
    std::cout << static_cast<int>(c) << '\n'; // 2
    return 0;
}
