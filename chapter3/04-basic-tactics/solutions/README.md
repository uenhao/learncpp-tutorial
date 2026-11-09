# 参考答案

## missing_parens.cpp
症状：打印 1（函数指针的布尔转换）而非 4。
流程打印后输出 `main() called` 但没有 `getValue() called` → 函数从未被调用。
根因：`std::cout << getValue << '\n';` —— getValue 后缺 ()，打印的是函数指针。
修复：改为 `getValue()`。

## literal_arg.cpp
插桩（cerr 全用不缩进）：
- main::x = 4 ✓  main::y = 3 ✓  main::z = 9 ✗ → 问题在 x,y→z 之间
- add() 入口打印：(x=4, y=5) → 传入的 y 是 5！main 里 y 是 3
- 根因：`int z{ add(x, 5) };` 第二个实参误写字面量 5，应为 y
修复：`add(x, y)`。输出 7。
