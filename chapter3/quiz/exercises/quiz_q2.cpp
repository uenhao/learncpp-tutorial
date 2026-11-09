// Quiz Q2: should divide two numbers; crashes with inputs 8 and 4.
// Debug: watch the CALL STACK when it crashes; inspect locals.
#include <iostream>

int readNumber()
{
	std::cout << "Please enter a number: ";
	int x {};
	std::cin >> x;
	return x;
}

void writeAnswer(int x)
{
	std::cout << "The quotient is: " << x << '\n';
}

int main()
{
	int x{ };
	int y{ };
	x = readNumber();
	x = readNumber();
	writeAnswer(x/y);
	return 0;
}
