// Write a test function for factorial() using known answers:
//   0! == 1, 1! == 1, 5! == 120, 6! == 720
// Run your tests, observe which fail, then find & fix the bug in factorial.
#include <iostream>

int factorial(int n)
{
    int result{ 0 }; // subtle bug: can you find it via your tests?
    for (int i{ 2 }; i <= n; ++i)
        result = result * i;
    return result;
}

// TODO: write testFactorial() that prints expected vs actual for
// 0!, 1!, 5!, 6! and reports PASS/FAIL for each.

int main()
{
    // TODO: call testFactorial()
    return 0;
}
