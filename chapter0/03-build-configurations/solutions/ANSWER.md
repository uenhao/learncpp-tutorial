# 练习答案：Debug vs Release 构建对比

典型结果（x86-64 g++ 14，数值因环境略有差异）：

```
$ g++ -std=c++20 -g -O0 -o demo_debug sizeof_demo.cpp
$ g++ -std=c++20 -O2 -o demo_release sizeof_demo.cpp
$ ls -l demo_debug demo_release
-rwxr-xr-x 1 user user ~ 50K demo_debug
-rwxr-xr-x 1 user user ~ 17K demo_release
```

**为什么 Debug 更大？**

1. `-g` 把 DWARF 调试信息（源码行号表、变量名到内存位置的映射）嵌进可执行文件，这部分通常占大头。
2. `-O0` 不优化：函数不内联、不消除死代码、每个局部变量都真实占用栈空间；还可能加入防栈破坏的探针。

**为什么 Release 下调试器显示 `<optimized out>`？**

`-O2` 时编译器可能：把 `width`/`height` 直接常量折叠成 `square(20)` 的结果 `400`；把变量放进寄存器不占内存。变量"存在过"但运行时没有对应的存储位置，调试器自然看不到。这也解释了为什么**调试必须在 Debug 构建下进行**。

**注意**：Release 与 Debug 行为理论上相同——前提是没有未定义行为。一旦有 UB（未初始化变量、越界等），两个构建可能给出不同结果，这常常是"Debug 正常 Release 崩溃"的原因。
