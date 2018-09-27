#include "DarkMagic.h"

DarkMagic::DarkMagic(int actionPoints, int cost, SpellBook *magicBook) : Spell(actionPoints, cost, magicBook) {
    this->combatSpell = true;
}
DarkMagic::~DarkMagic(){}

void DarkMagic::action(Unit* target, double SpellPower) {
    target->takeMagicDamage((int)(this->getActionPoints() * SpellPower));
}
