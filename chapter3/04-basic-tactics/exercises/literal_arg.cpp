// 战术三练习：输入 4 和 3，应得 7，实际得 9。
// 只许加 std::cerr 打印（变量值 + 函数入口），hi-lo 式收敛定位 bug。
#include <iostream>

int add(int x, int y)
{
	return x + y;
}

int getUserInput()
{
	std::cout << "Enter a number: ";
	int x{};
	std::cin >> x;
	return x;
}

void printResult(int z)
{
	std::cout << "The answer is: " << z << '\n';
}

int main()
{
	int x{ getUserInput() };
	int y{ getUserInput() };

	int z{ add(x, 5) }; // bug 在这附近
	printResult(z);
	return 0;
}
