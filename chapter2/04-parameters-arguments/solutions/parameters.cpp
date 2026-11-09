// Solution for parameters.cpp.
#include <iostream>

int doubleArea(int width, int height)
{
    return width * height * 2;
}

void tryToModify(int x)
{
    x = 999; // only the parameter (a copy) changes
    std::cout << "inside: " << x << '\n';
}

int main()
{
    std::cout << doubleArea(3, 4) << '\n'; // 24

    int a{ 5 };
    tryToModify(a);       // inside: 999
    std::cout << "after: " << a << '\n'; // still 5

    /*
     * Conclusion: arguments are passed by value. tryToModify receives a
     * copy of a; assigning to x has no effect on a. To let a function
     * change the caller's variable we need references (chapter 12).
     */
    return 0;
}
