// Comments demo: documenting intent, not mechanics.
#include <iostream>

/*
 * Computes the total price after a member discount.
 * We use integer cents (not double) to avoid floating point
 * rounding issues with money -- see learncpp 4.x for details.
 */
int discountedCents(int cents, int percentOff)
{
    return cents * (100 - percentOff) / 100;
}

int main()
{
    std::cout << discountedCents(1999, 20) << '\n'; // 20% off $19.99
    return 0;
}
