#ifndef SPELL_CASTER_H
#define SPELL_CASTER_H

#include "../unit/Unit.h"
#include "../ability/MagicAbility.h"
#include "../state/MagicState.h"
#include "../ability/DefaultAbility.h"
#include "../spell/SpellBook.h"


class MagicAbility;


class SpellCaster: public Unit {
    protected:
        MagicState* magicState;
        MagicAbility* magicAbility;

    public:
        SpellCaster(const char* title, int hitPoints, int damage, int mana);
        virtual ~SpellCaster();

        int getMana() const;
        int getManaLimit() const;

        void addMana(int extra);
        void spendMana(int cost);

        void changeSpell(spells newSpell);
        virtual void cast(Unit* enemy);
        virtual void meditation();

        void PrintDescription();

};

#endif // SPELL_CASTER_H
