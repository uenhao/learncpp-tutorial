// Switch demo: calculator (with break) + intentional fallthrough experiment.
#include <iostream>

void printMath(int x, int y, char op)
{
    switch (op)
    {
    case '+':
        std::cout << x << " + " << y << " = " << x + y << '\n';
        break;
    case '-':
        std::cout << x << " - " << y << " = " << x - y << '\n';
        break;
    case '*':
        std::cout << x << " * " << y << " = " << x * y << '\n';
        break;
    case '/':
        std::cout << x << " / " << y << " = " << x / y << '\n';
        break;
    default:
        std::cout << "unknown op\n";
        break;
    }
}

int main()
{
    printMath(2, 3, '+');
    printMath(2, 3, '/');

    // Fallthrough experiment: comment out ONE break and observe.
    int level{ 2 };
    switch (level)
    {
    case 1:
        std::cout << "easy ";
        // break;   // <- uncomment to stop fallthrough
    case 2:
        std::cout << "medium ";
        // break;
    case 3:
        std::cout << "hard";
        break;
    }
    std::cout << '\n';
    return 0;
}
