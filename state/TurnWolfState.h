#ifndef TURNWOLF_STATE_H
#define TURNWOLF_STATE_H

#include <iostream>
#include "../exceptions.h"
#include "State.h"

class TurnWolfState : public State {

public:
    TurnWolfState(const char *title, int hitPoints, int damage);
    ~TurnWolfState();

    bool getIsTurnWolf();
    bool getIsWolf();
    void takeMagicDamage(int dmg);
};


#endif // WEREWOLF_STATE_H