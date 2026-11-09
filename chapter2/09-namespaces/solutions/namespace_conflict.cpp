// Solution for namespace_conflict.cpp.
#include <iostream>

namespace alexmath
{
    int doSomething(int x, int y)
    {
        return x + y;
    }
}

namespace bobmath
{
    int doSomething(int x, int y)
    {
        return x - y;
    }
}

int main()
{
    std::cout << alexmath::doSomething(4, 3) << '\n'; // 7
    std::cout << bobmath::doSomething(4, 3) << '\n';  // 1

    // TODO 2: `using namespace bobmath;` compiles because it imports the
    // single visible doSomething. But `using namespace` both alexmath AND
    // bobmath reintroduces ambiguity: calls without :: fail to compile.
    // That fragility is why "using namespace X" at global scope is avoided.
    return 0;
}
