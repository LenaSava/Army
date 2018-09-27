#ifndef ARMY_DEMON_H
#define ARMY_DEMON_H

#include "../spellcaster/Warlock.h"
#include "Unit.h"
#include "Soldier.h"
#include "../ability/WarlockAbility.h"

class Warlock;

class Demon : public Soldier {
public:
    Demon(const char* title = "Demon", int hitPoints = 150, int damage = 20);
    virtual ~Demon();

};


#endif //ARMY_DEMON_H
