#include "HumanPlayer.h"
#include "Board.h"
#include <iostream>


HumanPlayer::HumanPlayer(char symbol, std::string name)
    : Player(symbol, name){}

void HumanPlayer::makeMove(Board& board) {
    int row, col;
    std::cout << getName() << " (" << getSymbol() << "), " << "Enter row number (0-2): " << std::endl;
    std::cin >> row;
    std::cout << "Enter column number (0-2): " << std::endl;
    std::cin >> col;
    while(!board.makeMove(row, col, getSymbol())){
        std::cout << "Invalid Move!" << " Try Again:" << std::endl;
        std::cin >> row >> col;
    }
}