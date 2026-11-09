// Solution for literals.cpp
#include <iostream>
#include <string>

int main()
{
    int count{ 123 };
    double pi{ 3.14159 };
    char grade{ 'A' };          // single quotes: one character
    std::string msg{ "Hello" }; // double quotes: string
    bool ok{ true };

    std::cout << count << ' ' << pi << ' ' << grade << ' '
              << msg << ' ' << ok << '\n';

    // TODO 2 note: 'Hello' is a multi-character literal -- int-sized,
    // implementation-defined value; modern compilers warn/error on it.
    return 0;
}
