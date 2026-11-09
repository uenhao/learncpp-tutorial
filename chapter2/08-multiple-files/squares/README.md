# 三文件示例：main.cpp + squares.cpp

```bash
g++ -std=c++20 -Wall -Wextra -o squares main.cpp squares.cpp
./squares
```

**体验链接错误**：只编译 main（`g++ -c main.cpp`）能过；直接
`g++ main.cpp -o x` 则报 `undefined reference to square(int)`——
因为定义所在的 squares.cpp 没有参与链接。
