// 语义错误三层级演示。
// Level 1: compile-time semantic error (uncomment to see)
//   int main() { 5 = x; return 0; }
//
// Level 2: runtime crash (uncomment)
// #include <iostream>
// int main() { int a{10}, b{0}; std::cout << a/b; }
//
// Level 3: silent wrong result -- ACTIVE below
#include <iostream>

int add(int x, int y) // meant to add
{
    return x - y;     // semantic error: wrong operator
}

int main()
{
    std::cout << "5 + 3 = " << add(5, 3) << '\n'; // prints 2, not 8
    return 0;
}
