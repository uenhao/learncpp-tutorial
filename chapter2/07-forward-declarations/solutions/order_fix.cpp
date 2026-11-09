// Solution for order_fix.cpp.
#include <iostream>

int secret(int x); // forward declaration: name + signature, no body

int main()
{
    std::cout << secret(6) << '\n'; // OK: compiler knows the signature
    return 0;
}

int secret(int x) // the one and only definition (ODR)
{
    return x * x;
}

/*
 * TODO 3: uncommenting the second secret() body violates the One
 * Definition Rule: "multiple definition of `secret(int)`" at link time.
 * Declarations may repeat freely; definitions may not.
 */
