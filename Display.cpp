#include "Display.h"
#include <iostream>

void Display::printBoard(Board& board){
    for(int row = 0; row < 3; row++){
        for(int col = 0; col < 3; col++){
            if(col == 2 ) {
                std::cout << board.getCell(row, col) << std::endl;
            } else {
            std::cout << board.getCell(row, col) << ' ' << "|" << ' ';
            }
        }
        if(row < 2){
            std::cout << std::string(9, '-') << std::endl;
        }
    }
}

void Display::showTurn(Player* player){
    std::cout << std::endl << "Turn: " << player->getName() << std::endl;
}

void Display::showWin(Player* winner){
    std::cout  << std::endl << "Winner is " << winner->getName() << "!" << std::endl;
}

void Display::showDraw(){
    std::cout << std::endl << "It is a draw!" << std::endl;
}