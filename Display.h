#include <string>
#include "Board.h"
#include "Player.h"

class Display{
    public:
        void printBoard(Board& board);
        void showTurn(Player* player);
        void showWin(Player* winner);
        void showDraw();
};