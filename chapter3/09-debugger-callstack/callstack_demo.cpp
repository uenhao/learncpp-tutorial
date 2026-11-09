// Call stack demo: set breakpoints on the cout lines of a() and b(),
// F5, and inspect the CALL STACK pane at each stop.
#include <iostream>

void a()
{
	std::cout << "a() called\n";
}

void b()
{
	std::cout << "b() called\n";
	a();
}

int main()
{
	a();
	b();
	return 0;
}
