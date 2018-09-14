#include "Lightning.h"

Lightning::Lightning(int actionPoints, int cost, SpellBook *magicBook) : Spell(actionPoints, cost, magicBook) {
    this->combatSpell = true;
}
Lightning::~Lightning(){}

void Lightning::action(Unit* target, double SpellPower) {
    target->takeMagicDamage((int)(this->getActionPoints() * SpellPower));
}

