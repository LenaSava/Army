//
// Created by LenkaSava on 14.09.18.

#include "NecroAbility.h"

NecroAbility::NecroAbility(SpellCaster *owner, spells spell) : MagicAbility(owner, spell) {

}

NecroAbility::~NecroAbility() {}

void NecroAbility::cast(Unit *enemy) {
    this->owner->ensureIsAlive();
    this->owner->spendMana(this->spell->getCost());

    double SpellPower;

    if ( this->spell->getCombatSpell() ) {
        SpellPower = 1.5;
    } else {
        SpellPower = 0;
    }
    this->spell->action(enemy, SpellPower);
}