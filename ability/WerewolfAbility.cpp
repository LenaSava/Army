#include "WerewolfAbility.h"

WerewolfAbility::WerewolfAbility(Unit* owner): Ability(owner) {}

void WerewolfAbility::attack(Unit* enemy) {
    this->owner->ensureIsAlive();
    enemy->takeDamage(this->owner->getDamage());
    enemy->counterAttack(this->owner);
}

void WerewolfAbility::counterAttack(Unit* enemy) {
    this->owner->ensureIsAlive();
    enemy->takeDamage(this->owner->getDamage() / 2);
}

void WerewolfAbility::convert(Unit* enemy) {
    this->owner->ensureIsAlive();
    enemy->ensureIsAlive();
    if (owner->getIsWolf() == true) {
        if (enemy->getIsVampire() == true) {
            std::cout << enemy->getTitle() << " : I'm Vampire! I'l kill you! " << std::endl;
        } else if (enemy->getIsWolf() == true) {
            std::cout << enemy->getTitle() << " : I'm already Werewolf! Back OFF! " << std::endl;
        } else if (enemy->getIsTurnWolf() == true) {
            std::cout << enemy->getTitle() << " : I'm already ANGRYwolf! Distroy! " << std::endl;
        } else {
            std::cout << enemy->getTitle() << " : not a Wolf! " << std::endl;
            enemy->changeAbility(new WerewolfAbility(enemy));
            enemy->changeState(
                    new WerewolfState(this->owner->getTitle(), this->owner->getHitPoints(), this->owner->getDamage()));
            std::cout << enemy->getTitle() << " : new Wolf! " << std::endl;
            return;
        }
    }
}

void WerewolfAbility::turnMySelf() {
    this->owner->ensureIsAlive();
    const char *newTitle = "AngryWolf";
    const char *oldTitle = "Andy";
    if (this->owner->getIsWolf() == true) {
        std::cout << owner->getTitle() << ": I'm ready to turn into Wolf!" << std::endl;
        int newHitPoints = owner->getHitPoints() * 2;
        int newDamage = owner->getDamage() * 2;
        owner->changeState(new TurnWolfState(newTitle, newHitPoints, newDamage));
    } else if ( this->owner->getIsTurnWolf() == true ) {
        std::cout << owner->getTitle() << ": I'm ready to turn into Werewolf!" << std::endl;
        int oldHitPoints = owner->getHitPoints() / 2;
        int oldDamage = owner->getDamage() / 2;
        owner->changeState(new WerewolfState(oldTitle, oldHitPoints, oldDamage));
    }
}

WerewolfAbility::~WerewolfAbility() {}
