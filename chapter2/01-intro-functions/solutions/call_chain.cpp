// Solution for call_chain.cpp.
// Note: a() calls c() before c() is defined, so a forward declaration
// is required -- the exact topic of lesson 2.7.
#include <iostream>

void c(); // forward declaration (see lesson 2.7)

void a()
{
    std::cout << "A start\n";
    c();
    std::cout << "A end\n";
}

void b()
{
    std::cout << "B\n";
}

void c()
{
    std::cout << "C\n";
}

void sayHello()
{
    std::cout << "Hello from a function!\n";
}

void greetTwice()
{
    sayHello();
    sayHello();
}

int main()
{
    std::cout << "main start\n";
    a(); // prints A start / C / A end
    b(); // prints B
    greetTwice();
    std::cout << "main end\n";
    return 0;
}
