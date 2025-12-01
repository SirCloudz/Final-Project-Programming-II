#include "game_engine.h"
#include "controller.h"
#include "ux.h"
#include <iostream>

int main()
{

    int choice = runUXMenu();

    if (choice == 1)
    {
        GameEngine engine;
        Controller ctrl(engine);
        ctrl.loop();
    }
    return 0;
}
