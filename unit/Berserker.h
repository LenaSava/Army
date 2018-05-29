#ifndef BERSERKER_H
#define BERSERKER_H

#include "Unit.h"
#include "../ability/DefaultAbility.h"
#include "../state/BerserkerState.h"


class Berserker : public Unit {
    public:
        Berserker(const char* title, int hitPoints, int damage);
        virtual ~Berserker();

};

#endif // BERSERKER_H