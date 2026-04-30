#ifndef PLAYER_H
#define PLAYER_H
#include <string>
#include "Board.h"

class Player{
    private:
        char symbol;
        std::string name;
    
    public:
        Player(char symbol, std::string name);
        virtual void makeMove(Board& board) = 0;
        char getSymbol() const;
        std::string getName() const;
};

#endif