// Include own header first: mismatched signatures fail right here.
#include "math_utils.h"

int square(int x)
{
    return x * x;
}

int cube(int x)
{
    return x * x * x;
}

int maxOf(int a, int b)
{
    return (a > b) ? a : b;
}
