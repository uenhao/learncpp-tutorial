// enum class vs unscoped enum: the two big problems solved.
#include <iostream>

enum class Color { red, green, blue };
enum class Fruit { banana, apple };

int main()
{
    Color color{ Color::red };
    Fruit fruit{ Fruit::banana };

    // if (color == fruit) // uncomment: compile error! (no implicit conversion)
    //     std::cout << "equal?\n";

    // Color c{ 2 }; // uncomment: compile error! (no implicit int conversion)

    std::cout << static_cast<int>(color) << '\n'; // 0 (explicit cast to print)
    return 0;
}
