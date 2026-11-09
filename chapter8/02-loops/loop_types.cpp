// Three loop types side by side (original lesson examples).
#include <iostream>

int main()
{
    // while: count 1..10
    int count{ 1 };
    while (count <= 10)
    {
        std::cout << count << ' ';
        ++count;
    }
    std::cout << "done!\n";

    // do-while: ask until valid (runs at least once)
    int x{};
    do
    {
        std::cout << "Enter 1-9: ";
        std::cin >> x;
    } while (x < 1 || x > 9);
    std::cout << "got " << x << '\n';

    // for: same count as while, three-part form
    for (int i{ 1 }; i <= 10; ++i)
        std::cout << i << ' ';
    std::cout << '\n';
    return 0;
}
