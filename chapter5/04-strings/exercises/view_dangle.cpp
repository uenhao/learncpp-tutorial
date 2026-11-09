// Experiment (run to OBSERVE, not to use): a string_view outliving its
// string is undefined behavior -- it may print garbage, empty, or crash.
// After observing, DELETE the dangling line (never ship code like this).
#include <iostream>
#include <string>
#include <string_view>

int main()
{
    std::string_view bad{};
    {
        std::string s{ "temporary text" };
        bad = s; // view looks at s, copies nothing
    }            // s destroyed here
    std::cout << bad << '\n'; // UB: reading through a dangling view
    return 0;
}
