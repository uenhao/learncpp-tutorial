# constexpr vs const 选型练习

场景判断（口诀：来源决定关键字）：
1. 光速常量 → constexpr（字面量）
2. 用户输入的"上限"？上限本身（120）constexpr；输入的值普通 int
3. 读入后不再变的配置值 → const（运行时常量）
4. `const int x{ 60*60*24 };` → 最好升 constexpr（initializer 是常量表达式）

取消 constexpr_demo.cpp 中的 bad 行亲眼看编译错误，是本课的动手核心。
