#ifndef MAGIC_ABILITY_H
#define MAGIC_ABILITY_H

#include "../spell/Spell.h"
#include "../spellcaster/SpellCaster.h"
#include "../spell/SpellBook.h"
#include "../Interface/Observer.h"
#include "../Interface/Observable.h"



class SpellCaster;
class Demon;

class MagicAbility {
    protected:
        SpellCaster* owner;
        Spell* spell;

    public:
        MagicAbility(SpellCaster* owner, spells spell);
        virtual ~MagicAbility();
        
        virtual void changeSpell(spells newSpell);
        virtual void cast(Unit* enemy);
        virtual void meditation();

        virtual Demon* evokeDemon();



};

#endif // MAGIC_ABILITY_H
