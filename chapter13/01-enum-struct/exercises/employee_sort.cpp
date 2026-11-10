// Exercise (the 1.7 IOU, struct edition): sort Employees by age descending.
// Notice how swap moves the WHOLE employee in one call -- no more
// per-field swapping!
#include <iostream>
#include <string>
#include <utility>

struct Employee
{
    int id{};
    std::string name{};
    int age{};
};

int main()
{
    Employee staff[]{
        { 1, "Joe", 25 },
        { 2, "Amy", 31 },
        { 3, "Bob", 19 },
    };

    // TODO: sort staff by age descending (nested for + std::swap)

    // TODO: print each employee (id, name, age)

    return 0;
}
