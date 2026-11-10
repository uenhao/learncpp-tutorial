// struct demo: employee with member selection and pass-by-reference.
#include <iostream>
#include <string>

struct Employee
{
    int id{};
    int age{};
    double wage{};
    std::string name{};
};

void printEmployee(const Employee& e)
{
    std::cout << e.id << " (" << e.name << "), age " << e.age << '\n';
}

void promote(Employee& e) // non-const: modifies the caller's employee
{
    ++e.age;
    e.wage *= 1.05;
}

int main()
{
    Employee joe{ 1, 25, 50000.0, "Joe" };
    printEmployee(joe);
    promote(joe);
    printEmployee(joe);
    return 0;
}
