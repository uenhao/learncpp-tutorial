// Exercise: these two expressions almost certainly don't do what the author
// intended. Predict each output first, run, then FIX with parentheses or
// rewritten logic so the intent ("x is not greater than y", "either x or y
// is zero") is clearly expressed.
#include <iostream>

int main()
{
    int x{ 5 };
    int y{ 7 };

    if (!x > y)             // intent: NOT (x > y)
        std::cout << "1: x is not greater\n";
    else
        std::cout << "1: x is greater\n";

    int a{ 0 };
    int b{ 3 };
    if (a == 0 || b == 0 == false)  // intent: either a or b is zero
        std::cout << "2: some zero found\n";
    else
        std::cout << "2: no zeros\n";
    return 0;
}
