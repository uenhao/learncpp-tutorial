// Namespaces demo: two libraries, same function name, no conflict.
#include <iostream>

namespace physics
{
    double gravity() { return 9.8; }
}

namespace game
{
    double gravity() { return 15.0; } // lower gravity world
}

int main()
{
    std::cout << "physics::gravity = " << physics::gravity() << '\n';
    std::cout << "game::gravity    = " << game::gravity() << '\n';
    return 0;
}
