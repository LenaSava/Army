#ifndef VAMPIRE_ABILITY_H
#define VAMPIRE_ABILITY_H

#include "Ability.h"
#include "../state/VampireState.h"

class VampireAbility : public Ability {
    public:
        VampireAbility(Unit* owner);


        void attack(Unit* enemy);
        void counterAttack(Unit* enemy);
        void stealHP(Unit* enemy);

        void convert(Unit* enemy);

        virtual ~VampireAbility();


};

#endif // VAMPIRE_ABILITY_H