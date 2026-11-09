// Preprocessor demo: #include, object-like macros, #if 0.
#include <iostream>

#define ANSWER 42
#define GREETING "hello"

int main()
{
    // The preprocessor textually replaces ANSWER and GREETING:
    std::cout << GREETING << ": " << ANSWER << '\n';

#if 0
    std::cout << "this block is stripped before compiling\n";
#endif

    // Inspect what the preprocessor produced (see README):
    //   g++ -E preprocessor_demo.cpp | tail -20
    return 0;
}
