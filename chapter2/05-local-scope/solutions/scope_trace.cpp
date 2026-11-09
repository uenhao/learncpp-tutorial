// Solution for scope_trace.cpp.
#include <iostream>

void counter()
{
    int calls{ 1 }; // recreated on every call: prints 2 forever
    ++calls;
    std::cout << calls << '\n';
}

int main()
{
    counter(); // 2
    counter(); // 2
    counter(); // 2 -- local variables do not survive between calls

    int value{ 10 };
    {
        int valueInner{ 99 }; // FIX: renamed, no shadowing
        std::cout << valueInner << '\n';
    }
    std::cout << value << '\n'; // 10

    /*
     * TODO 3: to remember across calls we need either a static local
     * variable (introduced later) or state held by the caller and
     * passed in as a parameter. Guess recorded for chapter O.
     */
    return 0;
}
