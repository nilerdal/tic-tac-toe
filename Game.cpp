#include "Game.h"

Game::Game(Player* p1, Player* p2)
    : player1(p1), player2(p2){}

void Game::run(){
    while(true){
        display.printBoard(board);
        Player* pTemp;
        currentIndex == 0 ?  pTemp = player1 : pTemp = player2;
        
        display.showTurn(pTemp);
        pTemp->makeMove(board);

        GameState status = checkEnd(pTemp);
        if(status == GameState::draw){
            display.showDraw();
            break;
        } else if(status == GameState::win){
            display.showWin(pTemp);
            break;
        } 

        switchTurn();
    }
}

void Game::switchTurn(){
    currentIndex = 1 - currentIndex;
}

GameState Game::checkEnd(const Player* player){
    if(board.checkWin(player->getSymbol())){
        return GameState::win;
    }
    if(board.isFull()){
        return GameState::draw;
    }
    return GameState::ongoing;
}