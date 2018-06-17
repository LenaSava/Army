#ifndef VAMPIRE_H
#define VAMPIRE_H

#include "Unit.h"
#include "../ability/VampireAbility.h"
#include "../state/VampireState.h"

class Vampire : public Unit {
    public:
        Vampire(const char* title, int hitPoints, int damage);

        virtual ~Vampire();

};

#endif // VAMPIRE_H