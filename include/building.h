#ifndef BUILDING_H
#define BUILDING_H

#include "tile.h"
#include <string>

struct Building
{
    BuildingType type;
    Owner owner;
    int level;
    Building(BuildingType t = BuildingType::NONE_B, Owner o = Owner::NONE);
    std::string to_string() const;
};

#endif // BUILDING_H
