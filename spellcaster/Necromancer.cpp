#include "Necromancer.h"

Necromancer::Necromancer(const char *title, int hitPoints, int damage, int mana) : SpellCaster(title, hitPoints, damage, mana) {
    this->magicAbility = new NecroAbility(this, darkMagic);
}

Necromancer::~Necromancer() {}
