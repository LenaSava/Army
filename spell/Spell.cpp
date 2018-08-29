#include "Spell.h"

Spell::Spell(int actionPoints, int cost, SpellBook* magicBook) {
    this->actionPoints = actionPoints;
    this->cost = cost;
}


int Spell::getActionPoints() const {
    return this->actionPoints;
}

int Spell::getCost() const {
    return this->cost;
}

int Spell::getCombatSpell() const {
    return this->combatSpell;
}

Spell::~Spell() {
    std::cout << "Spell end" << std::endl;
}