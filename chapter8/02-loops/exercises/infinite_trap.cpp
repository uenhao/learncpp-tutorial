// Experiment: an infinite loop. Run it, watch it print 0 forever,
// stop with Ctrl+C. Then FIX by moving ++count inside braces
// (best practice: ALWAYS brace your loops).
#include <iostream>

int main()
{
    int count{ 0 };
    while (count < 3)
        std::cout << count << ' ';
        ++count; // indentation lies: this is OUTSIDE the loop!
    return 0;
}
