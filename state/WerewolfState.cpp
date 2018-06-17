#include "WerewolfState.h"

WerewolfState::WerewolfState(const char *title, int hitPoints, int damage) : State(title, hitPoints, damage) {
    this->isWolf = true;
}

WerewolfState::~WerewolfState() {}

bool WerewolfState::getIsWolf() {
    return this->isWolf;
}