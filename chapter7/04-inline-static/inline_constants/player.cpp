// One translation unit using the shared constants.
#include <iostream>
#include "constants.h"

void printPlayerLimit()
{
    std::cout << "players: " << config::maxPlayers << '\n';
}
