// Quiz Q1: should add two numbers; broken. Debug with the integrated
// debugger (watch x inside main and the parameter inside readNumber),
// then fix. Compare with the website answer.
#include <iostream>

int readNumber(int x)
{
	std::cout << "Please enter a number: ";
	std::cin >> x;
	return x;
}

void writeAnswer(int x)
{
	std::cout << "The sum is: " << x << '\n';
}

int main()
{
	int x {};
	readNumber(x);
	x = x + readNumber(x);
	writeAnswer(x);
	return 0;
}
