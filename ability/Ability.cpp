#include "Ability.h"

Ability::Ability(Unit* owner): owner(owner) {}
Ability::~Ability() {}

void Ability::attack(Unit* enemy) {
    this->owner->ensureIsAlive();
    enemy->takeDamage(this->owner->getDamage());
    enemy->counterAttack(this->owner);
}

void Ability::convert(Unit* enemy) {}

void Ability::counterAttack(Unit* enemy) {
    this->owner->ensureIsAlive();
    enemy->takeDamage(this->owner->getDamage() / 2);
}

void Ability::turnMySelf() {}