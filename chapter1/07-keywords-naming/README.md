# 1.7 关键字与命名标识符

📖 原文：[Keywords and naming identifiers](https://www.learncpp.com/cpp-tutorial/keywords-and-naming-identifiers/)

## 关键字（keywords）

C++ 保留的单词，不能用作变量名/函数名：`int`、`return`、`if`、`for`、`class`、`void`、`const`、`namespace`、`using`、`new`、`delete`、`true`、`false`……（完整表见原文）。

## 命名规则（必须遵守）

- 只能由字母、数字、下划线组成；
- 不能以数字开头；
- 不能与关键字相同。

## 命名规范（最佳实践）

| 规范 | 示例 | 说明 |
|------|------|------|
| 驼峰 camelCase | `totalCost` | 本教程采用，函数与变量 |
| 帕斯卡 PascalCase | `PlayerInventory` | 类/类型名常用 |
| 蛇形 snake_case | `total_cost` | 也可，保持一致即可 |

- 名字要**达意**：`firstPlaceScore` 优于 `fps`；
- C++20 起标识符允许 Unicode，但**实际项目坚持 ASCII**；
- 避开双下划线 `__x` 和下划线开头 `_x`（保留给实现）。

## 练习

`exercises/naming_quiz.cpp`：判断哪些名字合法、哪些应该更好。
