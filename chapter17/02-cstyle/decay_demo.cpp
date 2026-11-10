// C-style arrays: built into the language, decay into pointers, sizeof trap.
#include <iostream>
#include <iterator> // for std::size
#include <typeinfo>

// Array parameter: compiles like `const int*`, but the [] syntax documents
// "this is a decayed array" (a length written inside [] would be ignored).
void printArraySize(const int arr[])
{
    // The -Wsizeof-array-argument warning is the lesson itself: inside the
    // function arr is just a pointer, so sizeof returns the pointer size.
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wsizeof-array-argument"
    std::cout << sizeof(arr) << '\n'; // pointer size (8), NOT the array size!
#pragma GCC diagnostic pop
}

int main()
{
    int arr[5]{ 9, 7, 5, 3, 1 };

    // Decay: most expression contexts convert the array to a pointer to its
    // first element. The length type information is lost ("decay").
    auto ptr{ arr };
    std::cout << std::boolalpha
              << (typeid(ptr) == typeid(int*)) << ' ' // true: ptr is int*
              << (&arr[0] == ptr) << '\n';            // true: first element

    std::cout << sizeof(arr) << '\n'; // 20: whole array, 5 * 4-byte ints
    printArraySize(arr);              // 8: just a pointer inside the function

    // std::size works on the real array, refuses a decayed pointer:
    std::cout << std::size(arr) << '\n'; // 5
    // std::size(ptr); // compile error -- protects us from the sizeof trap

    // Signed indexing is fine here (unlike std::vector):
    int index{ 2 };
    std::cout << arr[index] << '\n'; // 5

    return 0;
}
