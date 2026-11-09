// Global variable: static duration (created before main!), namespace variant.
#include <iostream>

namespace config
{
    int g_x{}; // a global variable inside a namespace -- still global
}

int main()
{
    config::g_x = 3;
    std::cout << config::g_x << '\n';
    config::g_x = 5;
    std::cout << config::g_x << '\n';
    return 0;
}
