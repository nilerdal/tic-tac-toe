#include "Player.h"

Player::Player(char symbol, std::string name)
    : symbol{symbol}, name{name} {}

char Player::getSymbol(){
    return symbol;
}

std::string Player::getName(){
    return name;
}

