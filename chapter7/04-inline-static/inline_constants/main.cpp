// Another translation unit: same constants, no duplication, no ODR issue.
#include <iostream>
#include "constants.h"

void printPlayerLimit(); // declared in player.cpp

int main()
{
    printPlayerLimit();
    std::cout << "gravity: " << config::gravity << '\n';
    return 0;
}
