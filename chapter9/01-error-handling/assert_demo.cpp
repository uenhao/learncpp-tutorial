// assert demo: triggers with a bad gravity parameter.
#include <cassert>
#include <cmath>
#include <iostream>

double calculateTimeUntilObjectHitsGround(double initialHeight, double gravity)
{
    assert(gravity > 0.0); // programmer bug if violated

    if (initialHeight <= 0.0)
        return 0.0;

    return std::sqrt((2.0 * initialHeight) / gravity);
}

int main()
{
    std::cout << calculateTimeUntilObjectHitsGround(100.0, 9.8) << " s (ok)\n";
    std::cout << calculateTimeUntilObjectHitsGround(100.0, -9.8) << '\n'; // assert fires
    return 0;
}
