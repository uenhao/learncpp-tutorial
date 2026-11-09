// hi-lo 收敛练习：程序应打印 "balance = 600"（500 存入 100），
// 实际打印了错误值。请运行确认实际输出，然后用 hi-lo 策略定位根因：
//
// 规则：只允许加两处 std::cerr 观察点（不许先通读全部代码）。
//   观察点 1 放在你怀疑的位置之前，观察点 2 放在之后；
//   根据读数（"此刻还正确" / "此刻已出错"）判断方向，逐步收敛。
//
// 完成后写下：两次观察分别放在哪里？各自证明了什么？
// 最后对照 solutions/hilo_answer.md 的示范过程。
#include <iostream>

int addDeposit(int balance, int amount)
{
    return balance + amount;
}

int applyMaintenanceFee(int balance)
{
    return balance * 2 - 1000; // 维护费逻辑——业务上该是这样吗？
}

int applyInterest(int balance)
{
    return balance + 1;
}

int main()
{
    int balance{ 500 };

    balance = addDeposit(balance, 100); // 存入 100

    // 观察点 1：放这里时 balance 应该是多少？

    balance = applyMaintenanceFee(balance);

    balance = applyInterest(balance);
    balance = applyInterest(balance);

    // 观察点 2：放这里会观察到什么？证明 bug 在观察点之前还是之后？

    std::cout << "balance = " << balance << '\n';
    return 0;
}
