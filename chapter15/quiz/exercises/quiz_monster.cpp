// Quiz exercise (official 15.x Q1 a-e): rebuild this monster the OOP way.
//
// TODO (keep the same output):
//   1. Move MonsterType INSIDE class Monster as a nested UNscoped enum
//      named `Type` (the class is already a scope -- a scoped enum would
//      be redundant). Define nested types at the TOP of the class.
//   2. Make the data members private: Type m_type{}, std::string m_name{"???"},
//      std::string m_roar{"???"}, int m_hitPoints{}.
//   3. Add a constructor taking (Type, std::string_view name,
//      std::string_view roar, int hitPoints) with a member initializer list.
//   4. Turn getTypeString()/print() into member functions: constexpr
//      std::string_view getTypeString() const (switch over m_type),
//      void print() const printing:
//        Bones the skeleton has 4 hit points and says *rattle*.
//      (when hit points <= 0: "Bones the skeleton is dead.")
//   main() then becomes:
//        Monster skeleton{ Monster::skeleton, "Bones", "*rattle*", 4 };
//        skeleton.print();
//
// Expected output:
//   Bones the skeleton has 4 hit points and says *rattle*.
#include <iostream>
#include <string>
#include <string_view>

enum class MonsterType
{
    dragon,
    goblin,
    ogre,
    orc,
    skeleton,
    troll,
    vampire,
    zombie,
    maxMonsterTypes,
};

struct Monster
{
    MonsterType type{};
    std::string name{ "???" };
    std::string roar{ "???" };
    int hitPoints{};
};

std::string_view getTypeString(MonsterType type)
{
    switch (type)
    {
    case MonsterType::dragon:   return "dragon";
    case MonsterType::goblin:   return "goblin";
    case MonsterType::ogre:     return "ogre";
    case MonsterType::orc:      return "orc";
    case MonsterType::skeleton: return "skeleton";
    case MonsterType::troll:    return "troll";
    case MonsterType::vampire:  return "vampire";
    case MonsterType::zombie:   return "zombie";
    default:                    return "???";
    }
}

void print(const Monster& m)
{
    std::cout << m.name << " the " << getTypeString(m.type);
    if (m.hitPoints <= 0)
        std::cout << " is dead.\n";
    else
        std::cout << " has " << m.hitPoints << " hit points and says " << m.roar << ".\n";
}

int main()
{
    Monster skeleton{ MonsterType::skeleton, "Bones", "*rattle*", 4 };
    print(skeleton);

    return 0;
}
