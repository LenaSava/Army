#include "Spell.h"

Spell::Spell(int actionPoints, int cost, SpellBook* magicBook)
    : actionPoints(actionPoints), cost(cost), magicBook(magicBook){}


int Spell::getActionPoints() const {
    return this->actionPoints;
}

int Spell::getCost() const {
    return this->cost;
}

int Spell::getCombatSpell() const {
    return this->combatSpell;
}

SpellBook* Spell::getSpellBook() {
    return this->magicBook;
}

Spell::~Spell() {
    std::cout << "Spell end" << std::endl;
}