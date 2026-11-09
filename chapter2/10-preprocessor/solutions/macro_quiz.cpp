// Solution for macro_quiz.cpp.
#include <iostream>

// Fixed macros: every parameter and the whole expansion in parentheses.
#define DOUBLE(x) ((x) * 2)
#define SQUARE(x) ((x) * (x))

// TODO 4: modern replacement -- typed, scoped, debuggable:
constexpr int doubleIt(int x) { return x * 2; }
constexpr int squareIt(int x) { return x * x; }

int main()
{
    std::cout << DOUBLE(4) << '\n';     // 8
    std::cout << SQUARE(3 + 1) << '\n'; // 16 (was 7 before the fix!)

    std::cout << doubleIt(4) << '\n';   // 8
    std::cout << squareIt(3 + 1) << '\n'; // 16

    /*
     * Explanation: macros are textual substitution.
     *   SQUARE(3+1) -> 3+1*3+1 -> 3+3+1 = 7
     * Parentheses force ((3+1)*(3+1)) = 16. Even fixed, prefer constexpr:
     * no side-effect traps, real types, real debugging.
     */
    return 0;
}
