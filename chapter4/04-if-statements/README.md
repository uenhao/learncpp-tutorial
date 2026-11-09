# 4.4 if 语句（4.10）

📖 原文：[Introduction to if statements](https://www.learncpp.com/cpp-tutorial/introduction-to-if-statements/)

- if (condition) / else / else if 链；多语句用 {}；最佳实践：总是写花括号
- ==（比较）vs =（赋值）：if (x = 0) 是经典事故
- && || ! 与短路求值：if (b != 0 && a/b > 10) 的顺序是正确性要求
- 条件即 bool：0 为假、非 0 为真（但建议写明确比较）

## 练习
sign_classify.cpp（正/负/零 else if 链）+ assignment_trap.cpp（亲历 if(x=0)）
