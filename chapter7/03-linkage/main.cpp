// extern demo: share one global across translation units.
#include <iostream>
#include "globals.h"

int main()
{
    std::cout << "g_mode = " << g_mode << '\n'; // 4 (from globals.cpp)
    g_mode = 7;
    std::cout << "now     = " << g_mode << '\n'; // 7
    return 0;
}
