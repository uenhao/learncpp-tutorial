// Copy constructor, copy elision, explicit.
#include <iostream>

class Fraction
{
    int m_numerator{ 0 };
    int m_denominator{ 1 };

public:
    Fraction(int numerator = 0, int denominator = 1)
        : m_numerator{ numerator }
        , m_denominator{ denominator }
    {
    }

    // Copy constructor (normally left to the compiler -- written here just
    // to make its invocations visible).
    Fraction(const Fraction& f)
        : m_numerator{ f.m_numerator } // per-class access: f's private members
        , m_denominator{ f.m_denominator }
    {
        std::cout << "Copy constructor called\n";
    }

    void print() const
    {
        std::cout << "Fraction(" << m_numerator << ", " << m_denominator << ")\n";
    }
};

Fraction generateFraction(int n, int d)
{
    Fraction f{ n, d };
    return f; // named return value: NRVO candidate (elision optional)
}

class Dollars
{
    int m_dollars{};

public:
    explicit Dollars(int d) // explicit: no implicit int -> Dollars conversion
        : m_dollars{ d }
    {
    }

    int getDollars() const { return m_dollars; }
};

void printDollars(Dollars d)
{
    std::cout << '$' << d.getDollars() << '\n';
}

int main()
{
    Fraction f{ 5, 3 };
    Fraction fCopy{ f }; // copy constructor called
    fCopy.print();

    Fraction fromReturn{ generateFraction(1, 2) }; // copies typically elided (NRVO)
    fromReturn.print();

    // printDollars(5); // compile error: Dollars(int) is explicit
    printDollars(Dollars{ 5 });            // ok: direct-list initialization
    printDollars(static_cast<Dollars>(7)); // ok: static_cast considers explicit ctors

    return 0;
}
