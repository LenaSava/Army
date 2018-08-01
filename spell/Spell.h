#ifndef SPELL_H
#define SPELL_H

#include "../unit/Unit.h"

class SpellBook;

class Spell {
    protected:
        int actionPoints;
        int cost;
        bool combatSpell = false;
        SpellBook* magicBook;

    public:
        Spell(int actionPoints, int cost, SpellBook* magicBook);


        int getActionPoints() const;
        int getCost() const;
        int getCombatSpell() const;
        SpellBook* getSpellBook();

        virtual void action(Unit* target, double SpellPower) = 0;

    virtual ~Spell();
};

#endif // SPELL_H
