// std::vector basics: creation, CTAD, indexing, and the {5} vs (5) trap.
#include <iostream>
#include <vector>

int main()
{
    // Value initialization: 0 elements (uses default constructor)
    std::vector<int> empty{};

    // List construction: element values (list constructor + CTAD)
    std::vector primes{ 2, 3, 5, 7, 11 };        // 5 int elements
    std::vector vowels{ 'a', 'e', 'i', 'o', 'u' }; // 5 char elements

    // Indexing is zero-based; operator[] returns a reference to the element.
    std::cout << "The first prime number is: " << primes[0] << '\n';
    std::cout << "The second prime number is: " << primes[1] << '\n';
    std::cout << "The sum of the first 5 primes is: "
              << primes[0] + primes[1] + primes[2] + primes[3] + primes[4] << '\n';

    // Length: size() returns size_type (an alias for std::size_t, unsigned).
    // C++20 std::ssize() returns a signed type instead.
    std::cout << "length: " << primes.size() << '\n';

    // { 5 } vs ( 5 ): list constructor takes priority for a non-empty list!
    std::vector<int> v1{ 5 }; // 1 element with value 5 (list constructor)
    std::vector<int> v2(5);   // 5 elements, each value-initialized to 0
    std::cout << "v1: " << v1.size() << " element(s), v1[0] == " << v1[0] << '\n';
    std::cout << "v2: " << v2.size() << " element(s), v2[0] == " << v2[0] << '\n';

    // primes[9]; // compiles, but undefined behavior: no bounds checking!
    // primes.at(9); // at() checks and throws std::out_of_range

    return 0;
}
