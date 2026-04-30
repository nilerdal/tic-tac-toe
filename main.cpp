#include <iostream>
#include <cstdint>
#include "Game.h"
#include "HumanPlayer.h"
#include "AIPlayer.h"


int main(int argc, char **argv) {
    HumanPlayer p1('X', "Player 1");
    AIPlayer p2('O', 'X');
    Game game(&p1, &p2);
    game.run();

    return 0;
}