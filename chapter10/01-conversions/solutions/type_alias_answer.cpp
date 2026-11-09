// Solution: aliases are documentation, not type safety.
#include <iostream>

using Distance = double;
using Seconds = double;
using Speed = double;

Speed distanceOverTime(Distance d, Seconds t)
{
    return d / t;
}

int main()
{
    Distance d{ 100.0 };
    Seconds t{ 9.58 };

    std::cout << distanceOverTime(d, t) << '\n'; // 100/9.58 = 10.44 m/s

    // Swapped call STILL compiles -- both are just double!
    std::cout << distanceOverTime(t, d) << '\n'; // 9.58/100 = 0.0958 (nonsense!)
    // Lesson: aliases aid readability; real type safety needs
    // strong types (classes, chapter 14) or external tools.
    return 0;
}
