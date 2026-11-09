// Local scope demo: creation, destruction, and per-call isolation.
#include <iostream>

void counter()
{
    int calls{ 1 }; // fresh object on EVERY call
    std::cout << "counter called (calls = " << calls << ")\n";
    ++calls;        // dies at end of scope, so this has no lasting effect
}

int add(int x, int y) // x, y: local to add
{
    int sum{ x + y }; // sum: local to add
    return sum;
} // x, y, sum destroyed here

int main()
{
    counter();
    counter(); // same output: new local each call

    std::cout << add(2, 3) << '\n';
    // std::cout << sum; // error: sum is out of scope here
    return 0;
}
