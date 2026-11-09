// Predict (on paper) the output BEFORE running:
//   ① sizeof(short), sizeof(int), sizeof(long) on THIS machine
//   ② max 16-bit signed int
//   ③ what does int x{ 2'000'000'000 }; x = x + x; print? (careful: UB!)
// Then run and compare. (For ③, if your machine's int is 32-bit, the sum
// overflows -- observe what happens, and remember it is UB, not a rule.)
#include <iostream>

int main()
{
    std::cout << "short: " << sizeof(short) << " bytes\n";
    std::cout << "int:   " << sizeof(int)   << " bytes\n";
    std::cout << "long:  " << sizeof(long)  << " bytes\n";

    short max16{ 32767 };
    std::cout << "max16: " << max16 << '\n';

    // ③ uncomment to experiment (UB!):
    // int x{ 2'000'000'000 };
    // x = x + x;
    // std::cout << x << '\n';
    return 0;
}
