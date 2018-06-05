#include "Unit.h"

Unit::Unit(const char* title, int hitPoints, int damage)
    : state(new State(title, hitPoints, damage)) {
}

Unit::~Unit() {
    delete(this->state);
    delete(this->ability);
}

void Unit::ensureIsAlive() {
    this->state->ensureIsAlive();
}

const char* Unit::getTitle() const {
    return this->state->getTitle();
}

int Unit::getHitPoints() const {
    return this->state->getHitPoints();
}

int Unit::getHitPointsLimit() const {
    return this->state->getHitPointsLimit();
}

int Unit::getDamage() const {
    return this->state->getDamage();
}

void Unit::addHitPoints(int hp) {
    this->state->addHitPoints(hp);
}

void Unit::takeDamage(int dmg) {
    this->state->takeDamage(dmg);
}

void Unit::takeMagicDamage(int dmg) {
    this->state->takeMagicDamage(dmg);
}

void Unit::attack(Unit* enemy) {
    this->ability->attack(enemy);
}
void Unit::counterAttack(Unit* enemy) {
    this->ability->counterAttack(enemy);
}
void Unit::setAbility(Ability* newAbility) {
    if (this->ability != NULL ) {
        delete this->ability;
    }
    this->ability = newAbility;
}
void Unit::setState(State* newState) {
    if ( this->state != NULL) {
        delete this->state;
    }
    this->state = newState;
}
//void Unit::setTitile(const char* NewName) {
//    getTitle()= NewName;
//}

void Unit::PrintDescription() {
    std::cout << "Unit name is " << this->state->getTitle()
     << " His HitPoints " << this->state->getHitPoints()
              << " And Damage " << this->state->getDamage() << std::endl;
};
