#ifndef MAGIC_ABILITY_H
#define MAGIC_ABILITY_H

#include "../spell/Spell.h"
#include "../spellcaster/SpellCaster.h"
#include "../spell/SpellBook.h"



class SpellCaster;
class Demon;

class MagicAbility {
    protected:
        SpellCaster* owner;
        Spell* spell;
//        Demon* demon;

    public:
        MagicAbility(SpellCaster* owner, spells spell);
        virtual ~MagicAbility();
        
        virtual void changeSpell(spells newSpell);
        virtual void cast(Unit* enemy);
        virtual void meditation();

//        Demon* getDemon(demon de);

};

#endif // MAGIC_ABILITY_H
