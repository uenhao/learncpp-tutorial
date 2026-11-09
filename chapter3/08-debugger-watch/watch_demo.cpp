// Watch demo: F5 -> run to cursor on line 9 -> hover x (shows 1),
// add x to WATCH, then F10 twice: 1 -> 3 -> 6.
#include <iostream>

int main()
{
	int x{ 1 };
	std::cout << x << ' ';

	x = x + 2;
	std::cout << x << ' ';

	x = x + 3;
	std::cout << x << ' ';
	return 0;
}
