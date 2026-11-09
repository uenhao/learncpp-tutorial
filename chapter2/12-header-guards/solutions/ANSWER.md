# 答案：头文件保护

**TODO 1 复现的报错**（g++）：

```
In file included from b.h:1,
                 from main.cpp:2:
config.h:3:5: error: redefinition of 'int getConfigValue()'
config.h:3:5: note: 'int getConfigValue()' previously defined here
```

**TODO 2 修复**：见 [fixed/](fixed/)——三个头文件全部加上
`#ifndef X_H / #define X_H / #endif`。

**TODO 3 解析**：预处理是**逐文件文本拷贝**。main.cpp include 了 a.h 与 b.h，
而这两者**各自**把 config.h 的内容拷进来——config.h 被包含两次，
与 main.cpp 是否直接 include 无关。头文件保护让第二次包含整体失效。

构建验证：

```bash
g++ -std=c++20 -Wall -Wextra -I. -o demo main.cpp impl.cpp
```
