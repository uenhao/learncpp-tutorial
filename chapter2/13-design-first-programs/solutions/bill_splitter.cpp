// Solution for the bill splitter exercise.
#include <iostream>

/*
 * TODO 0 design notes:
 *   需求一句话：总额(分) + 小费% + 人数 -> 每人应付(分)。
 *   分解：withTip(cents, tipPercent) 纯计算；main() 只做交互。
 *   测试用例：
 *     10000 分 + 10% + 4 人 -> 11000/4 = 2750
 *     999  分 + 0%  + 3 人 -> 333
 *     100  分 + 50% + 0 人 -> 无意义输入，输出错误信息（边界）
 */

// Returns the total after adding tipPercent percent (integer math).
int withTip(int cents, int tipPercent)
{
    return cents + cents * tipPercent / 100;
}

int main()
{
    std::cout << "Bill in cents, tip %, number of people: ";

    int cents{};
    int tipPercent{};
    int people{};
    std::cin >> cents >> tipPercent >> people;

    if (people <= 0)
    {
        // No loops yet, so fail fast with a clear message instead of
        // dividing by zero (which would be UB for ints).
        std::cout << "error: need at least one person\n";
        return 1; // non-zero status: failed
    }

    int total{ withTip(cents, tipPercent) };
    std::cout << "each pays " << total / people << " cents\n";
    return 0;
}
