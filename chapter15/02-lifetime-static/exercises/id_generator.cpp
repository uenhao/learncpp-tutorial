// Exercise: every Widget prints id 0 -- they share no id generator.
//
// TODO: give each Widget a unique, increasing id:
//   1. Add a private `static inline int s_idGenerator{ 1 };`
//      (static = one shared copy, inline = initialize inside the class).
//   2. In the constructor, initialize m_id from the generator:
//      Widget() : m_id{ s_idGenerator++ } {}
//   3. Add a static member function `static int nextID()` returning
//      s_idGenerator (static functions have no `this`, and can only
//      access static members). Print it at the end of main().
//
// Expected output:
//   Widget 1
//   Widget 2
//   Widget 3
//   next id: 4
#include <iostream>

class Widget
{
    int m_id{};

public:
    Widget()
        : m_id{ 0 } // TODO: use the id generator instead
    {
    }

    int getID() const { return m_id; }
};

int main()
{
    Widget a{};
    Widget b{};
    Widget c{};

    std::cout << "Widget " << a.getID() << '\n';
    std::cout << "Widget " << b.getID() << '\n';
    std::cout << "Widget " << c.getID() << '\n';
    // TODO: std::cout << "next id: " << Widget::nextID() << '\n';

    return 0;
}
