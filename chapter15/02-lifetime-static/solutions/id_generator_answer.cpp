// Solution: static inline generator shared by all Widgets.
#include <iostream>

class Widget
{
private:
    static inline int s_idGenerator{ 1 }; // one shared copy for the whole class
    int m_id{};

public:
    Widget()
        : m_id{ s_idGenerator++ } // each object grabs the next id
    {
    }

    int getID() const { return m_id; }

    static int nextID() { return s_idGenerator; } // no `this`, statics only
};

int main()
{
    Widget a{};
    Widget b{};
    Widget c{};

    std::cout << "Widget " << a.getID() << '\n'; // 1
    std::cout << "Widget " << b.getID() << '\n'; // 2
    std::cout << "Widget " << c.getID() << '\n'; // 3
    std::cout << "next id: " << Widget::nextID() << '\n'; // 4

    return 0;
}
