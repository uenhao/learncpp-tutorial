// Exercise (official 16.2 Q4): the "three variables" version below works,
// but it cannot scale -- imagine 30 scores.
//
// TODO: rewrite with std::vector (keep the same I/O and output):
//   1. Replace the three ints with `std::vector<int> arr(3);`
//      (direct initialization: 3 elements, value-initialized to 0).
//   2. Read into the elements: std::cin >> arr[0] >> arr[1] >> arr[2];
//   3. Compute sum and product via arr[0], arr[1], arr[2].
//
// Expected (input 1 2 3):
//   Enter 3 integers: The sum is: 6
//   The product is: 6
#include <iostream>

int main()
{
    int a{};
    int b{};
    int c{};

    std::cout << "Enter 3 integers: ";
    std::cin >> a >> b >> c;

    std::cout << "The sum is: " << a + b + c << '\n';
    std::cout << "The product is: " << a * b * c << '\n';

    return 0;
}
