#include "WarlockAbility.h"

WarlockAbility::WarlockAbility(SpellCaster *owner, spells spell) : MagicAbility(owner, spell) {

}

WarlockAbility::~WarlockAbility() {}

void WarlockAbility::cast(Unit *enemy) {
    this->owner->ensureIsAlive();
    this->owner->spendMana(this->spell->getCost());

    double SpellPower;

    if ( this->spell->getCombatSpell() ) {
        SpellPower = 1;
    } else {
        SpellPower = 0;
    }
    this->spell->action(enemy, SpellPower);
}

//Demon* WarlockAbility::getDemon(demons demon) {
//    return this->demonMap.at(demon);
//}
