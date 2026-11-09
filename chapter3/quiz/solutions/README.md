# 测验参考答案（要点）

Q1：① main 第一处 readNumber(x) 返回值被丢弃；② readNumber 应用局部变量而非形参。
修复：int x { readNumber() }; x = x + readNumber();（readNumber 无参，内部局部变量）。

Q2：第二次 readNumber() 结果误赋给 x，y 恒为 0 → x/y 除零（UB，崩溃）。
调试器现场：CALL STACK = divide?/main，Local：x=8, y=0。
修复：int x { readNumber() }; int y { readNumber() }; writeAnswer(x/y);
附带发现：整数除法丢弃小数（第 4 章展开）。
