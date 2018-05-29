#include "BerserkerState.h"

BerserkerState::BerserkerState(const char* title, int hitPoints, int damage) : State(title, hitPoints, damage) {
    this->title = title;
    this->hitPoints = hitPoints;
    this->hitPointsLimit = hitPoints;
    this->damage = damage;
}

BerserkerState::~BerserkerState() {}

void BerserkerState::ensureIsAlive() {
    if ( this->hitPoints == 0 ) {
        throw OutOfHitPointsException();
    }
}

const char* BerserkerState::getTitle() const {
    return this->title;
}

int BerserkerState::getHitPoints() const {
    return this->hitPoints;
}

int BerserkerState::getHitPointsLimit() const {
    return this->hitPointsLimit;
}

int BerserkerState::getDamage() const {
    return this->damage;
}

void BerserkerState::addHitPoints(int hp) {
    this->ensureIsAlive();

    int total = this->hitPoints + hp;
    if ( total > this->hitPointsLimit ) {
        this->hitPoints = this->hitPointsLimit;
        return;
    }
    this->hitPoints = total;
}

void BerserkerState::_takeDamage(int dmg) {
    this->ensureIsAlive();

    if ( dmg > this->hitPoints ) {
        this->hitPoints = 0;
        return;
    }
    this->hitPoints -= dmg;
}

void BerserkerState::takeDamage(int dmg) {
    this->_takeDamage(dmg);
}
