#ifndef VAMPIRE_ABILITY_H
#define VAMPIRE_ABILITY_H

#include "Ability.h"

class VampireAbility : public Ability {
    public:
        VampireAbility(Unit* owner);


        void attack(Unit* enemy);
        void counterAttack(Unit* enemy);
        virtual void stealHP(Unit* enemy);

        virtual ~VampireAbility();


};

#endif // VAMPIRE_ABILITY_H