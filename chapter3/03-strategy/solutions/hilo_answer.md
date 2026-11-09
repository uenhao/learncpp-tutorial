# hi-lo 收敛答案

**实际行为**：程序打印 `balance = 202`（期望 600）。

执行链推演：500 → addDeposit(+100) → 600 → **applyMaintenanceFee（×2−1000 → 200）** → applyInterest(+1) → 201 → applyInterest(+1) → 202 → 打印。

**根因**：`applyMaintenanceFee` 里的 `balance * 2 - 1000` 是错误的业务逻辑
（维护费应是减一个固定小额，比如 −50，而不是 ×2−1000——这是典型的
"公式拼接错误"）。根因行 = applyMaintenanceFee 内的 return 语句。

**hi-lo 过程示范**（两次观察夹逼）：
- 观察点 1 放 addDeposit 之后：balance == 600（正确）
  → 证明"此刻问题还没发生" → bug 在更靠后的代码里（"太小"）
- 观察点 2 放两次 applyInterest 之后：balance == 202（已错）
  → 证明"此时已经错了" → bug 在观察点 2 之前（"太大"）
- 包围圈 = [applyMaintenanceFee, applyInterest×2]，对 applyMaintenanceFee
  插桩（入口打印 balance=600、返回 200）即锁定根因行。

**复盘要点**：第一次猜错方向完全正常——hi-lo 的每次猜测都提供信息，
猜错只会让你排除掉一段代码。两三轮之内必收敛。
