#include "FireBall.h"

FireBall::FireBall(int actionPoints, int cost, SpellBook* magicBook) : Spell(actionPoints, cost, magicBook) {
    this->combatSpell = true;
}

FireBall::~FireBall() {}

void FireBall::action(Unit* target, double SpellPower) {
    target->takeMagicDamage((int)(this->getActionPoints() * SpellPower));
}
