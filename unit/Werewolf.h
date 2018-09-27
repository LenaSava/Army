#ifndef WEREWOLF_H
#define WEREWOLF_H

#include "Unit.h"
#include "../ability/WerewolfAbility.h"
#include "../state/WerewolfState.h"

class Werewolf : public Unit {
public:
    Werewolf(const char* title, int hitPoints, int damage);

    ~Werewolf();
};

#endif // WEREWOLF_H