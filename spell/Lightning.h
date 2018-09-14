#ifndef ARMY_LIGHTNING_H
#define ARMY_LIGHTNING_H

#include "Spell.h"
#include "SpellBook.h"

class SpellBook;

class Lightning : public Spell {
public:
    Lightning(int actionPoints, int cost, SpellBook* magicBook);
    virtual ~Lightning();
    void action(Unit* target, double SpellPower);
};

#endif //ARMY_LIGHTNING_H
