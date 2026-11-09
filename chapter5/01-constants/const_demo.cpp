// const demo: assignment after creation is a compile error.
#include <iostream>

int main()
{
    const double gravity{ 9.8 };
    std::cout << gravity << '\n';

    // gravity = 9.81; // uncomment: compile error! "assignment of read-only variable"
    return 0;
}
