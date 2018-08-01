#include "Heal.h"

Heal::Heal(int actionPoints, int cost, SpellBook* magicbook) : Spell(actionPoints, cost, magicbook) {
    this->combatSpell = false;
}

Heal::~Heal() {}

void Heal::action(Unit* target, double SpellPower) {

    target->addHitPoints((int)(this->getActionPoints() * SpellPower));
}
