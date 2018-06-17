
#include "Unit.h"

Unit::Unit(const char* title, int hitPoints, int damage)
    : state(new State(title, hitPoints, damage)) {
}

Unit::~Unit() {
    delete(this->state);
    delete(this->ability);
    std::cout << "Unit destructor" << std::endl;
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

void Unit::convert(Unit* enemy) {
    this->ability->convert(enemy);
}
void Unit::turnMySelf() {
    this->ability->turnMySelf();
}

void Unit::counterAttack(Unit* enemy) {
    this->ability->counterAttack(enemy);
}
bool Unit::getIsVampire() {
    return this->state->getIsVampire();
}

bool Unit::getIsWolf() {
    return this->state->getIsWolf();
}

bool Unit::getIsTurnWolf() {
    return this->state->getIsTurnWolf();
}

void Unit::changeAbility(Ability* newAbility) {
    this->ability = newAbility;
}

void Unit::changeState(State* newState) {
    delete(this->state);
    this->state = newState;
}

void Unit::PrintDescription() {
    std::cout << "Unit name is " << this->state->getTitle()
     << " His HitPoints " << this->state->getHitPoints()
              << " And Damage " << this->state->getDamage() <<
              std::endl;

};
