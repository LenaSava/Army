#ifndef VAMPIRE_STATE_H
#define VAMPIRE_STATE_H

#include <iostream>
#include "../exceptions.h"
#include "State.h"

class VampireState : public State {

public:
    VampireState(const char* title, int hitPoints, int damage);
    virtual ~VampireState();

    bool getIsVampire();


};

#endif // VAMPIRE_STATE_H