# LearnCpp 交互式学习教程（第 0–8 章）

基于 [LearnCpp.com](https://www.learncpp.com/) 第 0–8 章，提供两种学习载体：

## 🖥️ 交互式网站（推荐）

```bash
cd site && python3 -m http.server 8765
# 浏览器打开 http://127.0.0.1:8765
```

网站版包含 learncpp 的思维引导内容：概念引入 → 说明 → 反例 → **即时判分的选择题/判断题/预测输出题**，答题进度保存在浏览器本地。

## 📁 代码仓库（配套动手练习）

| 目录 | 内容 |
|------|------|
| `chapter0/` | 入门：编译链接、构建配置（4 节） |
| `chapter1/` | C++ 基础：语句、变量、iostream、表达式（11 节 + quiz） |
| `chapter2/` | 函数与文件：函数、头文件、多文件程序（13 节 + quiz） |
| `chapter3/` | 调试：六步流程、hi-lo 收敛、cerr 打印法、**VS Code 调试器实战**（10 节 + quiz） |
| `chapter4/` | 数据类型：sizeof、整数溢出、浮点精度、bool、if、char、static_cast（5 课 + quiz） |
| `chapter5/` | 常量与字符串：const/constexpr、进制、std::string（5 课 + quiz） |
| `chapter6/` | 运算符：优先级、取余、++/--、逻辑运算（3 课 + quiz） |
| `chapter7/` | 作用域/生命周期/链接：全局变量、影子、static、inline（4 课 + quiz） |
| `chapter8/` | 控制流：switch、fallthrough、循环三型、break/continue（2 课 + quiz） |

每节含示例代码 + `exercises/`（带 TODO）+ `solutions/`（参考答案）。
第 3 章练习须在 **Debug 构建 + VS Code 调试器**（F5/F10/F11/断点/监视）下完成。

### 编译

```bash
cmake -S . -B build && cmake --build build     # 全部示例与练习
./build/chapter3/watch_hunt                    # 例：调试器练习
```

## 约定

- C++20（CMake 已设置），`-Wall -Wextra -Wpedantic`
- 手动编译：`g++ -std=c++20 -Wall -Wextra -o prog main.cpp`
