#ifndef WEREWOLF_ABILITY_H
#define WEREWOLF_ABILITY_H

#include "Ability.h"
#include "../state/WerewolfState.h"
#include "../state/TurnWolfState.h"

class WerewolfAbility : public Ability {
public:
    WerewolfAbility(Unit* owner);

    void attack(Unit* enemy);
    void counterAttack(Unit* enemy);

    void convert(Unit* enemy);
    void turnMySelf();

    virtual ~WerewolfAbility();


};

#endif // WEREWOLF_ABILITY_H