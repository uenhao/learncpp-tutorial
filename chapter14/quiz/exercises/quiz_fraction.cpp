// Quiz exercise (official chapter-14 quiz Q2): convert the chapter-13
// Fraction struct version into a class where every function is a member
// function of the implicit object.
//
// TODO: rewrite as class Fraction:
//   - private int m_numerator{ 0 }, int m_denominator{ 1 }
//   - explicit Fraction(int numerator = 0, int denominator = 1)
//     with a member initializer list (all-default args = also the default ctor)
//   - void getFraction(): reads numerator/denominator from std::cin
//   - Fraction multiply(const Fraction& f) const
//     (access f.m_numerator directly -- per-class access)
//   - void printFraction() const
//
// Expected (input 1/2, then 3/4):
//   Your fractions multiplied together: 3/8
#include <iostream>

struct Fraction
{
    int numerator{ 0 };
    int denominator{ 1 };
};

void getFraction(Fraction& f)
{
    std::cout << "Enter a value for numerator: ";
    std::cin >> f.numerator;
    std::cout << "Enter a value for denominator: ";
    std::cin >> f.denominator;
    std::cout << '\n';
}

Fraction multiply(const Fraction& f1, const Fraction& f2)
{
    return { f1.numerator * f2.numerator, f1.denominator * f2.denominator };
}

void printFraction(const Fraction& f)
{
    std::cout << f.numerator << '/' << f.denominator << '\n';
}

int main()
{
    Fraction f1{};
    getFraction(f1);

    Fraction f2{};
    getFraction(f2);

    std::cout << "Your fractions multiplied together: ";
    printFraction(multiply(f1, f2));

    return 0;
}
