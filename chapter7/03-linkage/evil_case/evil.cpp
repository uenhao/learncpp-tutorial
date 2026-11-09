// The "evil global" case (from original lesson 7.8): g_mode changed behind
// main's back by doSomething(). Run it, observe "boom", then FIX by passing
// the mode as a parameter (best practice).
#include <iostream>

int g_mode{};

void doSomething()
{
    g_mode = 2; // sneaky change
}

int main()
{
    g_mode = 1;
    doSomething();
    if (g_mode == 1)
        std::cout << "No threat detected.\n";
    else
        std::cout << "Launching nuclear missiles...\n"; // ouch
    return 0;
}
