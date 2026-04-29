#include "Board.h"

Board::Board(){
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            grid[i][j] = ' ';
        }
    }
}

bool Board::makeMove(int row, int col, char symbol){
    if(grid[row][col] != ' ' || (row < 0 || row > 2) || (col < 0 || col > 2)){
        return false;
    }
    grid[row][col] = symbol;
    return true;
}

bool Board::checkWin(char symbol){
    for(int i=0; i<3; i++){
        if((grid[i][0] == symbol && grid[i][1] == symbol && grid[i][2] == symbol) 
        || (grid[0][i] == symbol && grid[1][i] == symbol && grid[2][i] == symbol))
            return true;
        
    }

    if((grid[0][0] == symbol && grid[1][1] == symbol && grid[2][2] == symbol)
    || (grid[0][2] == symbol && grid[1][1] == symbol && grid[2][0] == symbol))
            
        return true;
    
    return false;
} 

bool Board::isFull(){
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(grid[i][j]==' '){
                return false;
            }
        }
    }
    return true;
}

char Board::getCell(int row, int col){
    return grid[row][col];
}

void Board::undoMove(int row, int col){
    grid[row][col] = ' ';
}