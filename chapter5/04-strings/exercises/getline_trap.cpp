// Reproduce the "John Doe steals the second question" bug:
// Enter your name: (type "John Doe")
// Notice the color question gets skipped. Fix it with std::getline.
#include <iostream>
#include <string>

int main()
{
    std::cout << "Enter your full name: ";
    std::string name{};
    std::cin >> name; // BUG: stops at whitespace

    std::cout << "Enter your favorite color: ";
    std::string color{};
    std::cin >> color; // eats "Doe" from the buffer

    std::cout << name << " / " << color << '\n';
    return 0;
}
