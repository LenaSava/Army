//
// Created by LenkaSava on 19.09.18.
//

#include "NecroState.h"

NecroState::NecroState(int mana) : MagicState(mana) {
    this->isNecromancer = true;
}
NecroState::~NecroState() {}

bool NecroState::getIsNecromancer() {
    return this->isNecromancer;
}