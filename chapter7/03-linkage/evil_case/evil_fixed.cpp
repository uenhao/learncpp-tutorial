// Fixed version: no global state; data flows through parameters.
#include <iostream>

int doSomething(int mode)
{
    return 2; // the original intent, now explicit and traceable
}

int main()
{
    int mode{ 1 };
    mode = doSomething(mode);
    if (mode == 1)
        std::cout << "No threat detected.\n";
    else
        std::cout << "Launching nuclear missiles...\n"; // still 2 -> but now
        // the CHANGE is visible at the call site: mode = doSomething(mode);
    return 0;
}
