// Exercise: read an integer and classify it using an else-if chain:
//   x < 0  -> "negative"
//   x == 0 -> "zero"
//   x > 0 && x <= 100 -> "small positive"
//   x > 100           -> "large positive"
// Remember: best practice = always use braces.
#include <iostream>

int main()
{
    std::cout << "Enter an integer: ";
    int x{};
    std::cin >> x;

    // TODO: implement the 4-way classification above

    return 0;
}
