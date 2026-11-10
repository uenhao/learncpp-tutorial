// Friend non-member functions and the access-function alternative.
//
// friendship is granted BY the class whose members are accessed; a friend
// has full access to private members. But direct access couples the friend
// to the implementation -- compare both print() versions below.
#include <iostream>

class Accumulator
{
    int m_value{ 0 };

public:
    void add(int value) { m_value += value; }

    // friend declaration (unaffected by access specifiers, position-free)
    friend void print(const Accumulator& accumulator);

    int value() const { return m_value; } // reasonable access function
};

// print() is a friend: it can touch m_value directly. No implicit object --
// the accumulator must be passed in explicitly.
void print(const Accumulator& accumulator)
{
    std::cout << accumulator.m_value;
}

// printViaInterface() is NOT a friend: it goes through the public getter.
// If m_value is ever renamed/replaced, only the class needs to change.
void printViaInterface(const Accumulator& accumulator)
{
    std::cout << accumulator.value();
}

int main()
{
    Accumulator acc{};
    acc.add(5);

    print(acc);            // 5 (direct private access)
    std::cout << ' ';
    printViaInterface(acc); // 5 (interface access)

    std::cout << '\n';
    return 0;
}
