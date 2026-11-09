# 第 2 章 小结与测验

📖 官方测验：[Chapter 2 summary and quiz](https://www.learncpp.com/cpp-tutorial/chapter-2-summary-and-quiz/)

## 本章要点

| 主题 | 要点 |
|------|------|
| 函数 | 命名的语句集；调用后回到调用处 |
| 返回值 | 有返回类型的函数每条路径必须 return |
| 参数 | 按值拷贝；改形参不影响实参 |
| 局部作用域 | 块内创建块外销毁；避免同名遮蔽 |
| 前向声明 | 分号结尾无函数体；解决"用先于定义" |
| 多文件 | 声明在头文件、定义在源文件 |
| 命名空间 | `ns::name` 隔离冲突；慎用 `using namespace` |
| 头文件保护 | `#ifndef/#define/#endif` 防重复包含 |

## 综合测验

打开 [exercises/quiz.cpp](exercises/quiz.cpp) 完成 4 道题：
1. **找错**：前向声明缺失 + 返回路径缺失；
2. **预测输出**：参数拷贝与局部作用域；
3. **多文件改造**：把单文件程序拆成 `.h + .cpp + main.cpp`；
4. **设计题**：从需求写伪代码再实现（BMI 计算器）。

参考答案在 [solutions/](solutions/)。
