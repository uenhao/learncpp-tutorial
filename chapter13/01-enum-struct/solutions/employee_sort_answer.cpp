// Solution: one std::swap(e1, e2) moves all members at once.
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

    for (int i{ 0 }; i < 3; ++i)
        for (int j{ i + 1 }; j < 3; ++j)
            if (staff[j].age > staff[i].age)
                std::swap(staff[i], staff[j]); // whole struct!

    for (const auto& e : staff)
        std::cout << e.id << ' ' << e.name << ' ' << e.age << '\n';
    // 2 Amy 31 / 1 Joe 25 / 3 Bob 19
    return 0;
}
