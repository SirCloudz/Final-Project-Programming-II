#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "map.h"
#include "game_engine.h"
#include <string>

class Controller
{
public:
    Controller(GameEngine &engine);
    void loop(); // main input loop

private:
    GameEngine &eng;
    void process_line(const std::string &line);
};

#endif // CONTROLLER_H
