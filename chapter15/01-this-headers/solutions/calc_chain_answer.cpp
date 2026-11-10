// Solution: each mutator returns a reference to *this, so calls chain;
// reset() overwrites the implicit object with a fresh value-initialized one.
#include <iostream>

class Calc
{
    int m_value{};

public:
    Calc& add(int value) { m_value += value; return *this; }
    Calc& sub(int value) { m_value -= value; return *this; }
    Calc& mult(int value) { m_value *= value; return *this; }

    int getValue() const { return m_value; }

    void reset() { *this = {}; }
};

int main()
{
    Calc calc{};
    calc.add(5).sub(3).mult(4); // 8

    std::cout << calc.getValue() << '\n';

    calc.reset();
    std::cout << calc.getValue() << '\n'; // 0

    return 0;
}
