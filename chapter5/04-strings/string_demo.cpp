// std::string demo: dynamic length, getline.
#include <iostream>
#include <string>

int main()
{
    std::string name{ "Alex" };
    name = "Jason"; // longer -- fine
    name = "Jay";   // shorter -- fine
    std::cout << name << '\n';

    std::cout << "Enter your full name: ";
    std::string full{};
    std::getline(std::cin >> std::ws, full); // reads whole line incl. spaces
    std::cout << "Hello, " << full << '\n';
    return 0;
}
