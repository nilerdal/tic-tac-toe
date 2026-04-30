#ifndef HUMANPLAYER_H
#define HUMANPLAYER_H
#include "Player.h"

class HumanPlayer : public Player {
    public:
    HumanPlayer(char symbol, std::string name);
    void makeMove(Board& board) override;
};

#endif
