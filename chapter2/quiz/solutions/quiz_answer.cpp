// Reference answer for the chapter 2 quiz (single-file form).
// The multi-file version of Q3 lives in multifile/.
#include <iostream>

int triple(int x)
{
    return 3 * x;
}

int broken(int score)
{
    if (score >= 60)
        return 1;
    return 0; // FIX for Q1: was missing -- "control reaches end of
              // non-void function", which is undefined behavior
}

void copyThenChange(int x)
{
    x = 100; // modifies only the copy (pass by value)
}

int main()
{
    // Q1: both calls now fine
    std::cout << triple(4) << '\n';
    std::cout << broken(50) << '\n';

    // Q2 predictions:
    //   a prints 5 (copy modified, original untouched)
    //   printing b is a compile error: b out of scope
    int a{ 5 };
    copyThenChange(a);
    std::cout << a << '\n';

    {
        int b{ 1 };
    }
    // std::cout << b; // uncomment -> 'b' was not declared in this scope

    // Q4: BMI calculator
    std::cout << "Enter weight(kg) and height(m): ";
    double weight{};
    double height{};
    std::cin >> weight >> height;
    std::cout << "BMI = " << weight / (height * height) << '\n';

    return 0;
}
