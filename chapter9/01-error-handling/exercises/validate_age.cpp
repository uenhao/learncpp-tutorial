// Exercise: read an age (1-120). Robust handling required:
//   - extraction fails (letters) -> clear + ignoreLine + retry
//   - age out of range -> error message + retry
// Hints: getDouble() above is the template; adapt for int and range check.
#include <iostream>
#include <limits>

void ignoreLine()
{
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

// TODO: int getAge() with robust validation, returns validated age

int main()
{
    // TODO: int age{ getAge() };  std::cout << "age = " << age << '\n';
    return 0;
}
