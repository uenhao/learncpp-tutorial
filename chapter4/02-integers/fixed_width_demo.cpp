// Fixed-width integers demo (<cstdint>).
#include <cstdint>
#include <iostream>

int main()
{
    std::int32_t w { 100 };              // exactly 32 bits, signed
    std::int64_t big { 900'000'000'000 };// exactly 64 bits
    std::size_t  n { sizeof(int) };      // type of sizeof results

    std::cout << w << ' ' << big << ' ' << n << '\n';
    std::cout << "sizeof(int32_t) = " << sizeof(std::int32_t) << '\n';
    std::cout << "sizeof(int64_t) = " << sizeof(std::int64_t) << '\n';
    return 0;
}
