#include <iostream>
#include <cstdint>
#include "Game.h"
#include "HumanPlayer.h"
#include "AIPlayer.h"


int main(int argc, char **argv) {
    HumanPlayer p1('X', "Player 1");
    AIPlayer p2('O', 'X');
    HumanPlayer p3('O', "Player 2");
    Game game(&p1, &p2); //To toggle to Player vs Player mode, change the second argument to &p3
    game.run();

    return 0;
}