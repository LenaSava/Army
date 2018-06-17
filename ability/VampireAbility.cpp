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
void VampireAbility::convert(Unit* enemy) {
    this->owner->ensureIsAlive();
    enemy->ensureIsAlive();
    if ( enemy->getIsVampire() ) {
        std::cout << enemy->getTitle() << " : I'm already Vampire! Back OFF! " << std::endl;
    } else if ( enemy->getIsWolf() ) {
        std::cout << enemy->getTitle() << " : I'm Werewolf! You are dead! " << std::endl;
    } else if ( enemy->getIsTurnWolf() ) {
        std::cout << enemy->getTitle() << " : I'm Wolf! You are dead! " << std::endl;
    }
    else {
        std::cout << enemy->getTitle() << " : not a Vampire! " << std::endl;
        enemy->changeAbility(new VampireAbility(enemy));
        enemy->changeState(new VampireState(this->owner->getTitle(), this->owner->getHitPoints(), this->owner->getDamage()));
        std::cout << enemy->getTitle() << " : new bloody Vampire! " << std::endl;
        return;
    }
}


VampireAbility::~VampireAbility() {}

