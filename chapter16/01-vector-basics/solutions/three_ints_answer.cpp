// Solution (official 16.2 Q4): vector + operator[].
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> arr(3); // 3 elements, value-initialized (0)

    std::cout << "Enter 3 integers: ";
    std::cin >> arr[0] >> arr[1] >> arr[2];

    std::cout << "The sum is: " << arr[0] + arr[1] + arr[2] << '\n';
    std::cout << "The product is: " << arr[0] * arr[1] * arr[2] << '\n';

    return 0;
}
