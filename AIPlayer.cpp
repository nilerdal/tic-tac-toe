#include "AIPlayer.h"
#include "Board.h"

AIPlayer::AIPlayer(char symbol, char oppSymbol)
    : Player(symbol, "AI"), oppSymbol(oppSymbol){}

char AIPlayer::getOppSymbol(){
    return oppSymbol;
}

void AIPlayer::makeMove(Board& board){
    int bestScore = -1000;
    int bestRow = -1, bestCol = -1;
    
    for(int row=0; row < 3; row++){
        for(int col=0; col < 3; col++){
            
            if(board.getCell(row, col) == ' ') {
                
                board.makeMove(row,col, getSymbol());
                
                // since we run minimax for the opponent at first (after we set our move on the board), 
                //we start with isMaximizing = false
                int score = minimax(board, false, 0); 

                board.undoMove(row, col);

                if(score > bestScore){
                    bestScore = score;
                    bestRow = row;
                    bestCol = col;
                }

            }
        }
    }

    board.makeMove(bestRow, bestCol, getSymbol());

}

int AIPlayer::minimax(Board board, bool isMaximizing, int depth){

    //base cases
    if(board.checkWin(getSymbol()))
        return 10 - depth;

    if(board.isFull())
        return 0;

    if(board.checkWin(getOppSymbol()))
        return depth - 10;
    
    int bestScore;
    if(isMaximizing){
        bestScore = INT16_MIN;
        for(int row=0; row < 3; row++){
            for(int col=0; col < 3; col++){
                if(board.getCell(row, col) == ' ') {
                    board.makeMove(row,col, getSymbol());
                    bestScore = std::max(bestScore, minimax(board, false, depth + 1));
                    board.undoMove(row, col);
                }
            }
        }      
    } else {
        bestScore = INT16_MAX;
        for(int row=0; row < 3; row++){
            for(int col=0; col < 3; col++){
                if(board.getCell(row, col) == ' ') {
                    board.makeMove(row,col, getOppSymbol());
                    bestScore = std::min(bestScore, minimax(board, true, depth + 1));
                    board.undoMove(row, col);
                }
            }
        }

    }
    return bestScore;
}