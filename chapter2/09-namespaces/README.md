# 2.9 命名冲突与命名空间

📖 原文：[Naming collisions and namespaces](https://www.learncpp.com/cpp-tutorial/naming-collisions-and-an-introduction-to-namespaces/)

## 命名冲突

两个库都提供 `foo()`，或自己的 `count` 与库的 `count` 撞车——链接器/编译器无法区分。

## 命名空间（namespace）

把名字圈进独立区域：

```cpp
namespace foo
{
    int doSomething(int x, int y) { return x + y; }
}

namespace goo
{
    int doSomething(int x, int y) { return x - y; }
}

int main()
{
    foo::doSomething(4, 3);   // 作用域解析运算符 ::
    goo::doSomething(4, 3);
}
```

## using 的两种用法（谨慎）

```cpp
using namespace std;       // ❌ 尽量避免：整个 std 倾倒进全局，冲突之源
using std::cout;           // ⭕ 可接受：只引入一个名字
std::cout << "hi";         // ✅ 最佳：全限定名
```

## 练习

`exercises/namespace_conflict.cpp`：解决两个 `doSomething` 的冲突。
