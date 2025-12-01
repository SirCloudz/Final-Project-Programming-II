#ifndef UNIT_H
#define UNIT_H

#include "tile.h"
#include <string>

struct Unit
{
    UnitType type;
    Owner owner;
    int hp;
    int atk;
    int def;
    int move; // movement points (abstract)
    Unit(UnitType t = UnitType::NONE_U, Owner o = Owner::NONE);
    std::string to_string() const;
};

#endif // UNIT_H
