#ifndef WEREWOLF_STATE_H
#define WEREWOLF_STATE_H

#include <iostream>
#include "../exceptions.h"
#include "State.h"

class WerewolfState : public State {

public:
    WerewolfState(const char *title, int hitPoints, int damage);
    ~WerewolfState();

    bool getIsWolf();

    const char* getTitle() const;
    int getHitPoints() const;
    int getHitPointsLimit() const;

    void takeMagicDamage(int dmg);

};


#endif // WEREWOLF_STATE_H