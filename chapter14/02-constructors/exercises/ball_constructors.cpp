// Exercise: four constructors, all doing the same two-member setup
// (flavor of official chapter-14 quiz Q1/Q2).
//
// TODO: compress the four constructors into TWO, with the same output:
//   1. Ball(double radius) becomes a DELEGATING constructor:
//        : Ball{ "black", radius }
//   2. Ball(std::string_view color = "black", double radius = 10.0)
//      does the real initialization with a member initializer list.
//   (Watch out: two constructors must not both be callable with zero args,
//    or `Ball def{}` becomes ambiguous.)
//
// Expected output:
//   Ball(black, 10)
//   Ball(blue, 10)
//   Ball(black, 20)
//   Ball(blue, 20)
#include <iostream>
#include <string_view>

class Ball
{
    std::string_view m_color{ "black" };
    double m_radius{ 10.0 };

public:
    Ball() {} // default
    Ball(std::string_view color)
        : m_color{ color }
    {
    }
    Ball(double radius)
        : m_radius{ radius }
    {
    }
    Ball(std::string_view color, double radius)
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
    Ball def{};
    Ball blue{ "blue" };
    Ball twenty{ 20.0 };
    Ball blueTwenty{ "blue", 20.0 };

    def.print();
    blue.print();
    twenty.print();
    blueTwenty.print();

    return 0;
}
