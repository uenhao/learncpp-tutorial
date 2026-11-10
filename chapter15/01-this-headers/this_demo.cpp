// The hidden "this" pointer: what the compiler really does, chaining, reset.
//
// The compiler rewrites:      calc.add(5);
// roughly into:               Calc::add(&calc, 5);            // object becomes an argument
// and the definition into:    static Calc& add(Calc* const this, int value)
//                             { this->m_value += value; return *this; }
//
// Every non-static member function has a `this` const pointer holding the
// address of the implicit object. `this` is a function parameter, so it adds
// NOTHING to the object's size.
#include <iostream>

class Calc
{
    int m_value{};

public:
    // Returning a reference to *this is what enables chaining:
    // calc.add(5) yields calc itself, so .sub(3) can be called on it
    // (same trick as std::cout << "a" << "b").
    Calc& add(int value) { m_value += value; return *this; }
    Calc& sub(int value) { m_value -= value; return *this; }
    Calc& mult(int value) { m_value *= value; return *this; }

    int getValue() const { return m_value; }

    // Reset to default state: value-initialize a new object and overwrite
    // the implicit object with it (never "call the constructor" directly).
    void reset() { *this = {}; }
};

struct Shadow
{
    int data{}; // no m_ prefix here (struct), so the parameter can shadow it

    void setData(int data)
    {
        this->data = data; // this->data is the member, data is the parameter
    }
};

int main()
{
    Calc calc{};
    calc.add(5).sub(3).mult(4); // method chaining: m_value == 8

    std::cout << calc.getValue() << '\n';

    calc.reset();
    std::cout << calc.getValue() << '\n'; // 0

    Shadow s{};
    s.setData(42);
    std::cout << s.data << '\n'; // 42

    return 0;
}
