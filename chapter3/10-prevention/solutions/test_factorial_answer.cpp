// Solution: the bug is `int result{ 0 };` -- every multiplication by 0
// leaves 0, so factorial(5) printed 0 for all n >= 2 (0!/1! still passed
// because they never enter the loop -- a nice lesson about test coverage!).
// Fix: initialize to 1.
#include <iostream>

int factorial(int n)
{
    int result{ 1 };
    for (int i{ 2 }; i <= n; ++i)
        result = result * i;
    return result;
}

void testFactorial()
{
    struct Case { int input; int expected; };
    Case cases[]{ {0, 1}, {1, 1}, {5, 120}, {6, 720} };

    for (const Case& c : cases)
    {
        int actual{ factorial(c.input) };
        std::cout << "factorial(" << c.input << ") = " << actual
                  << ", expected " << c.expected
                  << (actual == c.expected ? "  [PASS]" : "  [FAIL]") << '\n';
    }
}

int main()
{
    testFactorial();
    return 0;
}
