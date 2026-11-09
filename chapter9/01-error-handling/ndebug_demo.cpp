// NDEBUG switch: place #define NDEBUG before includes to disable asserts.
// (kept commented so the demo builds with asserts ON by default)
// #define NDEBUG
#include <cassert>
#include <iostream>

int main()
{
    assert(1 + 1 == 2); // no-op when NDEBUG is defined
    std::cout << "assert checked (or skipped under NDEBUG)\n";
    return 0;
}
