#include "Warlock.h"

Warlock::Warlock(const char *title, int hitPoints, int damage, int mana) : SpellCaster(title, hitPoints, damage, mana) {
    this->magicAbility = new WarlockAbility(this, lightning);
}

Warlock::~Warlock() {}


