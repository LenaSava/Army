#include "WarlockAbility.h"

#include "../unit/Demon.h"
#include <string>
#include <cstring>

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

Demon* WarlockAbility::evokeDemon() {
    return new Demon("Demon", 150, 20);
}
