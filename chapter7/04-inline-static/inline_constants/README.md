# inline 变量三文件实验

```bash
g++ -std=c++20 -Wall -Wextra -I. -o inline_demo main.cpp player.cpp && ./inline_demo
```

把 constants.h 里的 `inline constexpr` 改成普通 `constexpr` 再编译——
仍然通过（const/constexpr 默认 internal，各自副本）；改成非 const `int`
则 ODR 冲突。三种写法对比出 inline 的价值。
