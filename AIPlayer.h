#include "Player.h"

class AIPlayer : public Player {
    private:
    char oppSymbol;
    int minimax(Board board, bool isMaximizing, int depth);

    public:
    AIPlayer(char symbol, char oppSymbol, std::string name);
    void makeMove(Board& board) override;
    char getOppSymbol();
};