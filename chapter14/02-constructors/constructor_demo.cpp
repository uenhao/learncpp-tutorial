// Constructors: member initializer lists, = default, default arguments, delegation.
#include <iostream>
#include <string>
#include <string_view>

class Fraction
{
    int m_numerator{ 0 };
    int m_denominator{ 1 };

public:
    Fraction() = default; // explicitly defaulted default constructor

    Fraction(int numerator, int denominator)
        : m_numerator{ numerator }    // member initializer list: real initialization,
        , m_denominator{ denominator } // listed in declaration order
    {
    }

    void print() const
    {
        std::cout << m_numerator << '/' << m_denominator << '\n';
    }
};

class Employee
{
    std::string m_name{ "???" };
    int m_id{ 0 };

public:
    Employee(std::string_view name)
        : Employee{ name, 0 } // delegating constructor: delegates to the 2-arg ctor
    {
    }

    Employee(std::string_view name, int id)
        : m_name{ name }
        , m_id{ id }
    {
        std::cout << "Employee " << m_name << " created\n";
    }

    void print() const
    {
        std::cout << "Employee(" << m_name << ", " << m_id << ")\n";
    }
};

int main()
{
    Fraction f1{};       // 0/1 via the default constructor
    Fraction f2{ 5, 3 }; // 5/3 via the member initializer list
    f1.print();
    f2.print();

    Employee e1{ "Dave" };  // delegates to Employee(std::string_view, int)
    Employee e2{ "Kate", 42 };
    e1.print();
    e2.print();

    return 0;
}
