// UB demo: reading an uninitialized local variable.
// WARNING: this program intentionally contains undefined behavior!
// Compile WITHOUT optimizations first; each run may print garbage.
//
//   g++ -std=c++20 -O0 -o uninit uninit_demo.cpp && ./uninit
//
#include <iostream>

int main()
{
    int x;                 // uninitialized local: holds garbage
    int y{};               // value-initialized: guaranteed 0

    std::cout << "x (garbage?) = " << x << '\n';
    std::cout << "y (zero)     = " << y << '\n';
    return 0;
}
