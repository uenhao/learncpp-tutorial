// TODO 1: 本文件有一处多行注释嵌套导致编译失败。找出它并修复
//         （提示：/* 不能嵌套，改用多个 // 或调整结构）。
// TODO 2: 下面这行"用注释禁用代码"的做法不对，删除被禁用的代码行，
//         保留一句说明为什么删除（交给版本控制保存历史）。
// TODO 3: 给 add 函数补一条解释"为什么"的注释（而不是复述它做了什么）。
#include <iostream>

/* add returns the sum
   /* nested comment experiment */   // <- 修复这里的问题
int add(int a, int b)
{
    return a + b;
}

int main()
{
    // int old_way = add(1, 2); // keep just in case
    std::cout << add(2, 3) << '\n';
    return 0;
}
