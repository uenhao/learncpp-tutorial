// Exercise: this struct has a broken invariant -- firstInitial should always
// match the first character of name, but `e.name = "Mark"` leaves 'J' behind.
//
// TODO: turn Employee into a class with data hiding (keep the same output):
//   1. Make the data members private: std::string m_name{ "John" },
//      char m_firstInitial{ 'J' } (class members are private by default).
//   2. Provide setName(std::string_view) that updates BOTH members,
//      so the invariant is maintained at the only door in.
//   3. Provide const getters getName() and getFirstInitial().
//      getName() should return const std::string& (expensive type).
//   4. Move print() OUT of the class as a non-member function
//      taking const Employee& (prefer non-member functions).
//
// Expected output:
//   Employee John has first initial J
//   Employee Mark has first initial M
#include <iostream>
#include <string>
#include <string_view>

struct Employee
{
    std::string name{ "John" };
    char firstInitial{ 'J' }; // should match first initial of name

    void print() const
    {
        std::cout << "Employee " << name << " has first initial " << firstInitial << '\n';
    }
};

int main()
{
    Employee e{};
    e.print();

    e.name = "Mark"; // breaks the invariant silently
    e.print();       // prints the wrong initial

    return 0;
}
