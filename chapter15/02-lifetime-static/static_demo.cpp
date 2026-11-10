// Static members: shared by all objects, exist even with zero objects.
// A static member is essentially a global variable living in the class's scope.
#include <iostream>

class Something
{
public:
    // C++17: static inline lets us define+initialize inside the class
    // (no out-of-class definition needed). static constexpr works too.
    static inline int s_value{ 1 };

private:
    static inline int s_idGenerator{ 1 };
    int m_id{};

public:
    Something()
        : m_id{ s_idGenerator++ } // each object grabs a unique id
    {
    }

    int getID() const { return m_id; }

    // Static member function: no object needed, no `this`, can only
    // access static members.
    static int nextID() { return s_idGenerator; }
};

int main()
{
    // Access via class name (best practice), no object instantiated:
    std::cout << "initial s_value: " << Something::s_value << '\n';

    Something first{};
    Something second{};

    first.s_value = 2; // modifying "first's" s_value...
    std::cout << first.s_value << '\n';  // 2
    std::cout << second.s_value << '\n'; // 2 -- it was always shared

    std::cout << first.getID() << '\n';  // 1
    std::cout << second.getID() << '\n'; // 2
    std::cout << "next id will be: " << Something::nextID() << '\n'; // 3

    return 0;
}
