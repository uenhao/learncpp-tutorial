// Exercise (official 15.9 quiz Q1, step 1): Point3d must move by a Vector3d.
// This starter cheats: Vector3d's members are public, so moveByVector can
// poke them directly.
//
// TODO: encapsulate without breaking moveByVector -- keep the same output:
//   1. Make Vector3d's members private (m_x/m_y/m_z) with a constructor.
//   2. Grant friendship: `friend class Point3d;` inside Vector3d
//      (friendship is granted BY the class being accessed).
//      In THIS version Vector3d is fully defined before Point3d, so no
//      forward declaration is needed (the challenge version does need one).
//   3. CHALLENGE (official step 2): grant friendship to only the single
//      member function Point3d::moveByVector instead. This needs a class
//      forward declaration of Vector3d first, Point3d::moveByVector declared
//      but not defined, the friend declaration inside Vector3d, and the
//      definition of moveByVector placed AFTER Vector3d's full definition.
//
// Expected output:
//   Point(1, 2, 3)
//   Point(3, 4, 0)
#include <iostream>

struct Vector3d // TODO: struct with public members -> class with private members
{
    double m_x{};
    double m_y{};
    double m_z{};
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
        m_x += v.m_x;
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
