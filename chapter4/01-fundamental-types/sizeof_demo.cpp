// sizeof demo: how many bytes does each fundamental type occupy?
#include <iostream>

int main()
{
    std::cout << "bool:\t\t"     << sizeof(bool)      << " bytes\n";
    std::cout << "char:\t\t"     << sizeof(char)      << " bytes\n";
    std::cout << "short:\t\t"    << sizeof(short)     << " bytes\n";
    std::cout << "int:\t\t"      << sizeof(int)       << " bytes\n";
    std::cout << "long:\t\t"     << sizeof(long)      << " bytes\n";
    std::cout << "long long:\t"  << sizeof(long long) << " bytes\n";
    std::cout << "float:\t\t"    << sizeof(float)     << " bytes\n";
    std::cout << "double:\t\t"   << sizeof(double)    << " bytes\n";
    std::cout << "long double:\t" << sizeof(long double) << " bytes\n";

    // sizeof works on objects too:
    int x{ 5 };
    std::cout << "int x:\t\t"    << sizeof(x)         << " bytes\n";
    return 0;
}
