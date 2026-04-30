#ifndef GAME_H
#define GAME_H
#include "Board.h"
#include "Player.h"
#include "Display.h"

enum class GameState {
    ongoing,
    win,
    draw
};

class Game {
    private:
        Board board;
        Player* player1;
        Player* player2;
        int currentIndex;
        Display display;
        void switchTurn();
        GameState checkEnd(const Player* player);
    public:
        Game(Player* p1, Player* p2);
        void run();
        
};

#endif