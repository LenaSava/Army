#ifndef SPELLBOOK_H
#define SPELLBOOK_H

#include <iostream>
#include "Spell.h"
#include <map>
#include "FireBall.h"
#include "Heal.h"
#include "Lightning.h"
#include "DarkMagic.h"

class Spell;
class FireBall;
class Lightning;
class DarkMagic;

typedef enum{
    fireball,
    heal,
    lightning,
    darkMagic
} spells;

class SpellBook{
protected:
    std::map<spells, Spell*> spellsMap;
    static SpellBook* magicBook;

    SpellBook();
    ~SpellBook();

    SpellBook(const SpellBook*);

public:
    static SpellBook* Instance();
    Spell* getSpell(spells sp);
};


#endif //SPELLBOOK_H