// Solution (official 15.9 quiz Q1 step 1): encapsulated Vector3d + friend class.
#include <iostream>

class Vector3d
{
    double m_x{};
    double m_y{};
    double m_z{};

public:
    Vector3d(double x, double y, double z)
        : m_x{ x }, m_y{ y }, m_z{ z }
    {
    }

    void print() const
    {
        std::cout << "Vector(" << m_x << ", " << m_y << ", " << m_z << ")\n";
    }

    friend class Point3d; // Point3d may now access Vector3d's private members
};

class Point3d
{
    double m_x{};
    double m_y{};
    double m_z{};

public:
    Point3d(double x, double y, double z)
        : m_x{ x }, m_y{ y }, m_z{ z }
    {
    }

    void print() const
    {
        std::cout << "Point(" << m_x << ", " << m_y << ", " << m_z << ")\n";
    }

    void moveByVector(const Vector3d& v)
    {
        m_x += v.m_x; // legal: Point3d is a friend of Vector3d
        m_y += v.m_y;
        m_z += v.m_z;
    }
};

int main()
{
    Point3d p{ 1.0, 2.0, 3.0 };
    Vector3d v{ 2.0, 2.0, -3.0 };

    p.print();
    p.moveByVector(v);
    p.print();

    return 0;
}
