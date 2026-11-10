// length vs capacity, resize vs reserve, and the stack interface.
// (Capacity growth on reallocation: GCC/Clang double it; VS2022 grows 1.5x.)
#include <iostream>
#include <vector>

void printCapLen(const std::vector<int>& v)
{
    std::cout << "Capacity: " << v.capacity() << "  Length: " << v.size() << '\n';
}

int main()
{
    std::vector v{ 0, 1, 2 };
    printCapLen(v); // Capacity: 3  Length: 3

    v.resize(5); // length grows; new elements are value-initialized (0)
    printCapLen(v);
    for (auto i : v)
        std::cout << i << ' ';
    std::cout << '\n';

    v.resize(3); // shrink: length drops, capacity stays
    v.resize(5); // regrow: no reallocation needed (capacity kept, still >= 5)
    printCapLen(v);

    // Stack behavior on a vector (LIFO via the back end):
    std::vector<int> stack{};
    stack.push_back(1);
    stack.push_back(2);
    stack.push_back(3);
    std::cout << "Top: " << stack.back() << '\n'; // 3 -- peek, does not remove
    stack.pop_back();                             // remove top (returns void)
    std::cout << "After pop, top: " << stack.back() << '\n'; // 2

    // reserve(): only grows capacity, length untouched (stack scenario!)
    std::vector<int> reserved{};
    reserved.reserve(100);
    printCapLen(reserved); // Capacity: 100  Length: 0

    return 0;
}
