#include "geometry.h" // include own header first
#include <cmath>

double distance(int x1, int y1, int x2, int y2)
{
    int dx{ x2 - x1 };
    int dy{ y2 - y1 };
    return std::sqrt(dx * dx + dy * dy);
}
