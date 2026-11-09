// Solution for naming_quiz.cpp
#include <iostream>

int main()
{
    // int 3dPosition;   -> ILLEGAL: starts with a digit
    int position3d{ 1 };

    // int my var;       -> ILLEGAL: space not allowed
    int myVar{ 2 };

    // int class;        -> ILLEGAL: keyword
    int course{ 3 };    // renamed with meaning

    // int x2;           -> legal but meaningless for "user age"
    int userAge{ 25 };

    // int __reserved__; -> legal but double underscores are reserved
    //                       for the implementation; never use them
    int reservedValue{ 5 };

    // int TOTALamount;  -> legal but inconsistent casing
    int totalAmount{ 6 };

    std::cout << position3d << myVar << course << userAge
              << reservedValue << totalAmount << '\n';
    return 0;
}
