#ifndef SPELLBOOK_H
#define SPELLBOOK_H

#include <iostream>
#include "Spell.h"
#include <map>
#include "FireBall.h"
#include "Heal.h"

class Spell;
class FireBall;

typedef enum{
    fireball,
    heal,
} spells;

class SpellBook{
private:
    std::map<spells, Spell*> spellsMap;
    static SpellBook* magicBook;

    SpellBook();
    ~SpellBook();

    SpellBook(const SpellBook*);
//    SpellBook* operator= (const SpellBook*);

public:
    static SpellBook* Instance();
    Spell* getSpell(spells sp);
};


#endif //SPELLBOOK_H