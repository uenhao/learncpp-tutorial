// Exercise (official chapter-14 quiz Q1): convert this struct + free functions
// into a proper class.
//
// TODO: turn Point2d into a class, keeping the same output:
//   1. Rename members to private m_x{ 0.0 }, m_y{ 0.0 } (class = private).
//   2. Add a default constructor: Point2d() = default;
//      and Point2d(double x, double y) with a member initializer list.
//   3. Turn print() into a const member function (implicit object).
//   4. Turn distanceTo() into a const member function taking
//      const Point2d& other -- access other.m_x directly inside
//      (access level is per-class, not per-object). Needs <cmath>.
//
// Then main() becomes:
//   first.print();
//   second.print();
//   std::cout << "Distance between two points: " << first.distanceTo(second) << '\n';
//
// Expected output:
//   Point2d(0, 0)
//   Point2d(3, 4)
//   Distance between two points: 5
#include <cmath> // for std::sqrt
#include <iostream>

struct Point2d
{
    double x{ 0.0 };
    double y{ 0.0 };
};

void print(const Point2d& p)
{
    std::cout << "Point2d(" << p.x << ", " << p.y << ")\n";
}

double distanceTo(const Point2d& a, const Point2d& b)
{
    return std::sqrt(
        (a.x - b.x) * (a.x - b.x) +
        (a.y - b.y) * (a.y - b.y));
}

int main()
{
    Point2d first{};
    Point2d second{ 3.0, 4.0 };

    print(first);
    print(second);

    std::cout << "Distance between two points: " << distanceTo(first, second) << '\n';

    return 0;
}
