// Experience the = vs == trap. Compile with -Wall -Wextra and READ the
// warning (suggest parentheses around assignment used as truth value).
// Predict the output first, then run: does "x is zero" print? Why not?
// Fix: == . Keep the warning-free version.
#include <iostream>

int main()
{
    int x{ 5 };
    if (x = 0) // BUG: assignment, not comparison
        std::cout << "x is zero\n";
    std::cout << "x is now " << x << '\n'; // also damaged by the assignment
    return 0;
}
