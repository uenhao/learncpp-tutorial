// Exercise: optional output parameter via pass-by-address.
// setIfWanted should set *out to 42 ONLY if out is not null.
#include <iostream>

void setIfWanted(int* out) // TODO: implement (hint: if (out) *out = 42;)
{
    // TODO
}

int main()
{
    int a{};
    setIfWanted(&a);
    std::cout << "a = " << a << '\n'; // 42

    setIfWanted(nullptr); // caller opts out -- no crash
    std::cout << "done\n";
    return 0;
}
