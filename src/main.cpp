#include "game_engine.h"
#include "controller.h"
#include <iostream>

int main()
{
    GameEngine engine;
    Controller ctrl(engine);
    ctrl.loop();
    std::cout << "Gracias por jugar. Saliendo...\n";
    return 0;
}
