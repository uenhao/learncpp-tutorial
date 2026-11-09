# 头文件三件套示例

```bash
g++ -std=c++20 -Wall -Wextra -I. -o mathdemo main.cpp math_utils.cpp && ./mathdemo
```

`-I.` 告诉编译器去当前目录找 `math_utils.h`（CMake 版已自动处理）。
