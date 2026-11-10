// Solution: two constructors -- delegation + default arguments.
#include <iostream>
#include <string_view>

class Ball
{
    std::string_view m_color{ "black" };
    double m_radius{ 10.0 };

public:
    Ball(double radius)
        : Ball{ "black", radius } // delegate to the full constructor
    {
    }

    Ball(std::string_view color = "black", double radius = 10.0) // the real one
        : m_color{ color }
        , m_radius{ radius }
    {
    }

    void print() const
    {
        std::cout << "Ball(" << m_color << ", " << m_radius << ")\n";
    }
};

int main()
{
    Ball def{};          // both default arguments
    Ball blue{ "blue" }; // radius defaults to 10
    Ball twenty{ 20.0 }; // delegates (double can't convert to string_view)
    Ball blueTwenty{ "blue", 20.0 };

    def.print();
    blue.print();
    twenty.print();
    blueTwenty.print();

    return 0;
}
