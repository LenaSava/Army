#include "Necromancer.h"


Necromancer::Necromancer(const char *title, int hitPoints, int damage, int mana) : SpellCaster(title, hitPoints, damage, mana) {
    this->magicAbility = new NecroAbility(this, darkMagic);
    this->magicState = new NecroState(mana);
    this->isUndead = true;
}

Necromancer::~Necromancer() {}

void Necromancer::addObserver() {
    observers.insert(this);
}


void Necromancer::attack(Unit* enemy) {
    SpellCaster::attack(enemy);
    addObservable(enemy);


}

void Necromancer::cast(Unit* enemy) {
    SpellCaster::cast(enemy);
    addObservable(enemy);
}

void Necromancer::takeDamage(int dmg) {
    ensureIsAlive();
    if ( dmg >= getHitPoints() ) {
        notify();
        sendNotification();
        hitPoints = 0;
        return;
    }
    hitPoints -= dmg;
}

void Necromancer::takeMagicDamage(int dmg) {
    ensureIsAlive();
    if ( dmg >= getHitPoints() ) {
        notify();
        sendNotification();
        hitPoints = 0;
        return;
    }
    hitPoints -= dmg;
}
