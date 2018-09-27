#include "VampireState.h"

VampireState::VampireState(const char *title, int hitPoints, int damage) : State(title, hitPoints, damage) {
    this->isVampire = true;
}
VampireState::~VampireState() {}

bool VampireState::getIsVampire() {
    return this->isVampire;
}

