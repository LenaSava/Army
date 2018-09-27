#ifndef ARMY_DARKMAGIC_H
#define ARMY_DARKMAGIC_H

#include "Spell.h"
#include "SpellBook.h"

class SpellBook;

class DarkMagic : public Spell {
public:
    DarkMagic(int actionPoints, int cost, SpellBook* magicBook);
    virtual ~DarkMagic();
    void action(Unit* target, double SpellPower);
};

#endif //ARMY_DARKMAGIC_H
