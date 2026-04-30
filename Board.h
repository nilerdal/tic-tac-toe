#ifndef BOARD_H
#define BOARD_H   

class Board{
    private:
        char grid[3][3];
    public:
        Board();
        bool makeMove(int row, int col, char symbol);
        bool checkWin(char symbol);
        bool isFull();
        char getCell(int row, int col);
        void undoMove(int row, int col);
};

#endif