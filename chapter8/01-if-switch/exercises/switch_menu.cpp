// Exercise: build a menu with switch.
//   1 -> "add"  2 -> "subtract"  3 -> "multiply"  4 -> "divide"
//   other -> "unknown"
// Requirements: every case ends with break; default handled;
// divide by zero: print "cannot divide by zero" instead (ch4 knowledge).
#include <iostream>

int main()
{
    std::cout << "Enter two integers and an op (e.g. 6 3 /): ";
    int x{}, y{};
    char op{};
    std::cin >> x >> y >> op;

    // TODO: switch (op) with the 5 cases above

    return 0;
}
