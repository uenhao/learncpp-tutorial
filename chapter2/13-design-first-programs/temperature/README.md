# 设计过程（示例配套）

1. **需求一句话**：读入温度与单位，输出换算结果。
2. **分解**：换算逻辑（convert.h/.cpp）与交互（main.cpp）分离。
3. **伪代码**：
   ```
   读 temp、unit
   若 F：打印 fahrenheitToCelsius(temp)
   若 C：打印 celsiusToFahrenheit(temp)
   否则：报错
   ```
4. **测试用例**：100 C → 212 F；32 F → 0 C；-40 → -40（两种单位相等）；单位输入 X → 报错。

```bash
g++ -std=c++20 -Wall -Wextra -I. -o temp main.cpp convert.cpp && ./temp
```
