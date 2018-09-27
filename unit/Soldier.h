#ifndef SOLDIER_H
#define SOLDIER_H

#include "Unit.h"
#include "../ability/DefaultAbility.h"

class Soldier : public Unit {
    public:
        Soldier(const char* title = "Soldier", int hitPoints = 130, int damage = 6);
        virtual ~Soldier();
};


#endif // SOLDIER_H
