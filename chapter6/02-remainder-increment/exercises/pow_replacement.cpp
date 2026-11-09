// C++ has no ^ operator (it is bitwise XOR!). std::pow returns double.
// Task: print 2^10 using (a) std::pow and (b) a loop of integer
// multiplications (no floating point). Predict both outputs first.
#include <iostream>
#include <cmath>

int main()
{
    // (a) with std::pow
    // TODO: print std::pow(2.0, 10.0)

    // (b) integer loop
    int result{ 1 };
    for (int i{ 0 }; i < 10; ++i)
        result = result * 2;
    // TODO: print result
    return 0;
}
