#include "PriestAbility.h"

PriestAbility::PriestAbility(SpellCaster *owner, spells spell) : MagicAbility(owner, spell){}

PriestAbility::~PriestAbility() {}

void PriestAbility::cast(Unit *enemy) {
    this->owner->ensureIsAlive();
    this->owner->spendMana(this->spell->getCost());

    double SpellPower = 1;

    if (this->spell->getCombatSpell() ) {
        SpellPower = 0.5;
            if (enemy->getIsUnDead()) {
                SpellPower = 2;
            }
        }
    this->spell->action(enemy, SpellPower);
}
