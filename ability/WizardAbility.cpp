#include "WizardAbility.h"

WizardAbility::WizardAbility(SpellCaster* owner, spells spell) : MagicAbility(owner, spell) {}

WizardAbility::~WizardAbility() {}

void WizardAbility::cast(Unit* enemy) {
    this->owner->ensureIsAlive();
    this->owner->spendMana(this->spell->getCost());

    double SpellPower;

    if ( this->spell->getCombatSpell() ) {
        SpellPower = 1;
    } else {
        SpellPower = 0.5;
    }
    this->spell->action(enemy, SpellPower);
}