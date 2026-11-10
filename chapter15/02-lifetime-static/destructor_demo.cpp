// Destructors: called automatically when the object is destroyed.
// Inner-scope objects die first; static/global objects die at program shutdown.
// (Beware: std::exit() does NOT run destructors of local objects.)
#include <iostream>

class Simple
{
    int m_id{};

public:
    Simple(int id)
        : m_id{ id }
    {
        std::cout << "Constructing Simple " << m_id << '\n';
    }

    ~Simple() // destructor: same name prefixed with ~, no params, no return type
    {
        std::cout << "Destructing Simple " << m_id << '\n';
    }

    int getID() const { return m_id; }
};

int main()
{
    Simple simple1{ 1 };
    {
        Simple simple2{ 2 };
    } // simple2 destroyed here (inner scope first)

    std::cout << "...main body...\n";

    return 0;
} // simple1 destroyed here
