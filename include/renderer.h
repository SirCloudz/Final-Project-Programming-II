#ifndef RENDERER_H
#define RENDERER_H

#include "map.h"

class ConsoleRenderer
{
public:
    ConsoleRenderer();
    void render(const Map &map, int turno, int pa, int comida, int metal, int energia);
};

#endif // RENDERER_H
