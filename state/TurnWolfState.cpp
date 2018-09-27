#include "TurnWolfState.h"

TurnWolfState::TurnWolfState(const char *title, int hitPoints, int damage) : State(title, hitPoints, damage) {
    this->isWolf = false;
    this->isTurnWolf = true;
}

TurnWolfState::~TurnWolfState() {}

bool TurnWolfState::getIsWolf() {
    return this->isWolf;
}
bool TurnWolfState::getIsTurnWolf() {
    return this->isTurnWolf;
}

void TurnWolfState::takeMagicDamage(int dmg) {
    this->_takeDamage(dmg * 2);
}
