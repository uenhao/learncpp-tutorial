// Exercise: turn three loose calls into a member function chain, like
// std::cout << "a" << "b" (operator<< returns the stream itself).
//
// TODO (keep the same final output):
//   1. Change add/sub/mult to return Calc& and `return *this;` at the end.
//   2. In main(), replace the three calls with one chained line:
//        calc.add(5).sub(3).mult(4);
//   3. Add void reset() { /* TODO */ } that value-initializes a new object
//      and overwrites the implicit object with it (hint: *this = {};).
//      Then call calc.reset() after the first print.
//
// Expected final output:
//   8
//   0
#include <iostream>

class Calc
{
    int m_value{};

public:
    void add(int value) { m_value += value; }
    void sub(int value) { m_value -= value; }
    void mult(int value) { m_value *= value; }

    int getValue() const { return m_value; }
};

int main()
{
    Calc calc{};
    calc.add(5);
    calc.sub(3);
    calc.mult(4);

    std::cout << calc.getValue() << '\n'; // 8

    return 0;
}
