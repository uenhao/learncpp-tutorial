// Formatting demo: same program, before and after formatting.
#include <iostream>

int main()
{
    // Poorly formatted but valid C++:
    int width=3;int height=4;std::cout<<"area="<<width*height<<'\n';

    // Well formatted:
    int perimeter = 2 * (width + height);
    std::cout << "perimeter = " << perimeter << '\n';
    return 0;
}
