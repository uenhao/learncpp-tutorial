# 练习答案：区分编译错误与链接错误

将 `add` 重命名为 `addNums` 后：

- **编译阶段**（`g++ -c main_exercise.cpp`）：✅ 通过。因为前向声明 `int addNums(int, int);` 仍然存在，编译器只检查"这个调用与声明匹配吗"，不关心定义在哪。
- **链接阶段**（`g++ main.o add.o -o prog`）：❌ 报错：

  ```
  undefined reference to `addNums(int, int)'
  collect2: error: ld returned 1 exit status
  ```

**结论**：
1. 编译器逐文件检查语法/类型，链接器跨文件查找定义。
2. "声明了但没定义" → 编译通过、链接失败。
3. 修链接错误的第一步：检查函数名、参数类型、文件是否加入构建（与第 2 章 2.8 呼应）。

正确版本与示例目录中的 `main.cpp + add.cpp` 相同，编译运行输出：

```
The sum of 3 and 4 is: 7
```
