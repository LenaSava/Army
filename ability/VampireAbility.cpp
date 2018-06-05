#include "VampireAbility.h"

VampireAbility::VampireAbility(Unit* owner): Ability(owner) {}



void VampireAbility::attack(Unit* enemy) {
    this->owner->ensureIsAlive();
    enemy->takeDamage(this->owner->getDamage());
    enemy->counterAttack(this->owner);
    stealHP(enemy);
}

void VampireAbility::counterAttack(Unit* enemy) {
    this->owner->ensureIsAlive();
    enemy->takeDamage(this->owner->getDamage() / 2);
    stealHP(enemy);
}
void VampireAbility::stealHP(Unit *enemy) {
    enemy->takeDamage(this->owner->getDamage() / 10);
    this->owner->addHitPoints(enemy->getHitPoints() / 10 );
}


VampireAbility::~VampireAbility() {}

