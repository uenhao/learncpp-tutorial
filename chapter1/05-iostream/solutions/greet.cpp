// Solution for greet.cpp
#include <iostream>
#include <string>

int main()
{
    std::cout << "What is your name? ";
    std::string name{};
    std::cin >> name;

    std::cout << "How old are you? ";
    int age{};
    std::cin >> age;

    std::cout << "Hello, " << name << "! Next year you will be "
              << age + 1 << ".\n";
    std::cout << "Goodbye." << std::endl; // flushed immediately

    /*
     * TODO 4: if the user types "tom abc", the extraction into `age`
     * fails: `age` is left 0 (value-initialized), std::cin enters a
     * failed state, and all further extractions are skipped until the
     * stream is cleared (std::cin.clear() etc. -- later chapters).
     */
    return 0;
}
