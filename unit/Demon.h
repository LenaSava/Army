#ifndef ARMY_DEMON_H
#define ARMY_DEMON_H

#include "../spellcaster/Warlock.h"
#include "Soldier.h"
#include "../ability/WarlockAbility.h"

class Warlock;

class Demon : public Soldier {
private:
    Warlock* master;
public:
    Demon(const char* title = "Demon", int hitPoints = 70, int damage = 20);
    virtual ~Demon();
};


#endif //ARMY_DEMON_H
