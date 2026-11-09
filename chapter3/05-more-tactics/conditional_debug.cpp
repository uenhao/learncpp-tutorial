// Conditional compilation exercise.
// Build twice and compare:
//   (A) keep   #define ENABLE_DEBUG  -> g++ -std=c++20 -o with_debug conditional_debug.cpp
//   (B) comment out the #define      -> g++ -std=c++20 -o no_debug  conditional_debug.cpp
// Then: ./with_debug 5 vs ./no_debug 5  (output differs), and ls -l to compare sizes.
#include <iostream>

#define ENABLE_DEBUG // (B) comment out this line

int getUserInput()
{
#ifdef ENABLE_DEBUG
std::cerr << "getUserInput() called\n";
#endif
	std::cout << "Enter a number: ";
	int x{};
	std::cin >> x;
	return x;
}

int main(int argc, char* argv[])
{
#ifdef ENABLE_DEBUG
std::cerr << "main() called\n";
#endif
	int x{ argc > 1 ? std::atoi(argv[1]) : 5 };
	std::cout << "You entered: " << x << '\n';
	return 0;
}
