// Solution: data hiding -- setName() is the only door in, so the invariant
// "firstInitial == name.front()" can no longer be broken from outside.
#include <iostream>
#include <string>
#include <string_view>

class Employee
{
    std::string m_name{ "John" };
    char m_firstInitial{ 'J' };

public:
    void setName(std::string_view name)
    {
        m_name = name;
        m_firstInitial = name.front(); // maintain the invariant at the door
    }

    const std::string& getName() const { return m_name; }
    char getFirstInitial() const { return m_firstInitial; }
};

// Non-member print(): not part of the class interface, goes through the
// public getters. The class can change its implementation freely.
void print(const Employee& e)
{
    std::cout << "Employee " << e.getName() << " has first initial "
              << e.getFirstInitial() << '\n';
}

int main()
{
    Employee e{};
    print(e);

    e.setName("Mark");
    print(e); // Employee Mark has first initial M

    return 0;
}
