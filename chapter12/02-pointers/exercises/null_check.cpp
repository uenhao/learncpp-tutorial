// Experiment: dereferencing a null pointer is UB (usually crashes).
// Run as-is (safe: we check first), then comment out the if and observe.
#include <iostream>

int main()
{
    int* ptr{ nullptr };

    if (ptr) // null -> false -> skipped
        std::cout << *ptr << '\n';

    std::cout << "still alive\n";

    // int* bad{ nullptr };
    // std::cout << *bad << '\n'; // uncomment: UB! (likely crash)
    return 0;
}
