#include "MagicAbility.h"

MagicAbility::MagicAbility(SpellCaster* owner, spells spell)
    : owner(owner) {
    SpellBook* magicBook = SpellBook::Instance();
    this->spell = magicBook->getSpell(spell);
}

MagicAbility::~MagicAbility() {
    delete(this->spell);
}

void MagicAbility::changeSpell(spells newSpell) {
    this->spell = SpellBook::Instance()->getSpell(newSpell);
}

void MagicAbility::cast(Unit* enemy) {
    this->owner->ensureIsAlive();
    this->owner->spendMana(this->spell->getCost());
    double SpellPower = 1;
    this->spell->action(enemy, SpellPower);
}
void MagicAbility::meditation() {
    int ExtraMana = 10;
    this->owner->ensureIsAlive();

    this->owner->addMana(ExtraMana);
}

Demon* MagicAbility::evokeDemon() {}