// Solution for warning_hunt: all -Wall -Wextra warnings fixed.
#include <iostream>

int unfinished(int x)
{
    if (x > 0)
    {
        return x;
    }
    return 0; // FIX: all control paths must return a value
}

int main()
{
    // FIX: removed unused variable (or use [[maybe_unused]] if kept intentionally)

    int initList{ 3 }; // FIX: use int literal; braces disallow narrowing

    std::cout << "result = " << unfinished(5) << '\n';
    std::cout << initList << '\n';
    return 0;
}
