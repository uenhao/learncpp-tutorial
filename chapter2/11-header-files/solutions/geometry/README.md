# 参考答案构建

```bash
g++ -std=c++20 -Wall -Wextra -I. -o geo main.cpp geometry.cpp && ./geo
```

**思考题答案**：签名变化时，只要同时编译 `geometry.cpp`（include 了自己的头）
和所有 `#include "geometry.h"` 的消费者，编译器立刻报"声明与定义不匹配"。
这正是"源文件先 include 自己的头文件"的意义。
