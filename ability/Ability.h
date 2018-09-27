#ifndef ABILITY_H
#define ABILITY_H

#include "../unit/Unit.h"
#include "../Interface/Observer.h"
#include "../Interface/Observable.h"

class Unit;

class Ability {
    protected:
        Unit* owner;

    public:
    Ability(Unit* owner);
        virtual ~Ability();

        virtual void attack(Unit* enemy) = 0;
        virtual void convert(Unit* enemy);
        virtual void counterAttack(Unit* enemy);

        virtual void turnMySelf();
};

#endif // ABILITY_H
