#include "HumanPlayer.h"
#include "Board.h"
#include <iostream>


HumanPlayer::HumanPlayer(char symbol, std::string name)
    : Player(symbol, name){}

void HumanPlayer::makeMove(Board& board) {
    int row, col, number;
    std::cout << getName() << " (" << getSymbol() << "), " << "Enter your move (1-9): " << std::endl;
    std::cin >> number;
    row = (number - 1) / 3;
    col = (number - 1) % 3;
    while(!board.makeMove(row, col, getSymbol())){
        std::cout << "Invalid Move!" << " Try Again." << std::endl;
        makeMove(board);
        return;
    }
}