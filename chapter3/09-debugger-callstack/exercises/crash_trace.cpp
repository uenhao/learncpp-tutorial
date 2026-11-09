// Crash trace: this program crashes (integer division by zero is UB; here
// we trigger a crash via a null reference path that gdb catches cleanly).
// Task: run under debugger (F5). When it crashes, read the CALL STACK:
//   top frame  = crash point
//   below      = the call chain that led there
// Then walk UP the stack (click each frame) and find WHICH input leads to
// the fatal call. Report the call chain and the fix.
#include <iostream>

int divide(int a, int b)
{
    return a / b; // crashes when b == 0
}

int process(int n)
{
    return divide(100, n - 3);
}

int main()
{
    int n{};
    std::cout << "Enter a number: ";
    std::cin >> n;
    std::cout << process(n) << '\n';
    return 0;
}
