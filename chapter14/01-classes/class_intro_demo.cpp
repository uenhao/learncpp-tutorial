// From struct to class: private members, const member functions, access functions.
#include <iostream>
#include <string>
#include <string_view>

class Date
{
    int m_year{ 2020 };
    int m_month{ 10 };
    int m_day{ 14 }; // private by default (class members)

public:
    void print() const // const member function: promises not to modify the object
    {
        std::cout << m_year << '/' << m_month << '/' << m_day << '\n';
    }

    int getDay() const { return m_day; }  // getter (const)
    void setDay(int day) { m_day = day; } // setter (non-const)
};

class Person
{
    std::string m_name{};

public:
    void setName(std::string_view name) { m_name = name; }
    const std::string& getName() const { return m_name; } // getter returns by const reference

    void kisses(const Person& p) const
    {
        // Access level is per-class, not per-object: m_name of ANY Person
        // is accessible here, including p's.
        std::cout << m_name << " kisses " << p.m_name << '\n';
    }
};

int main()
{
    const Date today{}; // const object
    today.print();      // ok: const member function
    // today.setDay(16); // compile error: non-const member function on const object

    Date editable{};
    editable.setDay(16);
    editable.print();

    Person joe{};
    Person kate{};
    joe.setName("Joe");
    kate.setName("Kate");
    joe.kisses(kate); // Joe kisses Kate

    return 0;
}
