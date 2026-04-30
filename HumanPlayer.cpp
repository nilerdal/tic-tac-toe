#include "HumanPlayer.h"
#include "Board.h"
#include <iostream>


HumanPlayer::HumanPlayer(char symbol, std::string name)
    : Player(symbol, name){}

void HumanPlayer::makeMove(Board& board) {
    int row, col;
    std::cout << getName() << " (" << getSymbol() << "), " << "Enter your move: " << std::endl;
    std::cin >> row >> col;
    while(!board.makeMove(row, col, getSymbol())){
        std::cout << "Invalid Move!" << " Try Again:" << std::endl;
        std::cin >> row >> col;
    }
}