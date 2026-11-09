# 0.9 构建配置（Build Configurations）与调试信息

📖 原文：[0.9 Configuring your compiler: Build configurations](https://www.learncpp.com/cpp-tutorial/configuring-your-compiler-build-configurations/)

## Debug vs Release

| | Debug 构建 | Release 构建 |
|---|---|---|
| 目的 | 开发调试 | 交付性能 |
| 优化 | 无（`-O0`），代码按你写的顺序执行 | 有（`-O2`），重排/内联以提速 |
| 调试信息 | 生成（`-g`），断点/单步可用 | 默认无 |
| 变量观察 | 所有变量真实存在 | 可能被优化掉，watch 会显示 `<optimized out>` |
| 行为差异 | 无 | 优化可能暴露/掩盖未定义行为（UB） |

**最佳实践**：开发用 Debug；发布/测性能用 Release；两者都要能编译通过。

## CMake 中切换

```bash
# Debug（本项目默认演示）
cmake -S . -B build -DCMAKE_BUILD_TYPE=Debug
# Release
cmake -S . -B build/release -DCMAKE_BUILD_TYPE=Release
```

对应 g++ 单命令：

```bash
g++ -std=c++20 -g -O0 -o debug_build sizeof_demo.cpp   # Debug
g++ -std=c++20 -O2 -o release_build sizeof_demo.cpp    # Release
```

## 示例

`sizeof_demo.cpp` 打印几种基本类型的大小与 `main` 函数地址——Debug 下可对这些变量打断点观察，Release 下部分可能被优化。

## 练习

`exercises/`：分别用 Debug 和 Release 编译同一程序，`ls -l` 比较可执行文件大小，并思考为什么 Debug 更大。
