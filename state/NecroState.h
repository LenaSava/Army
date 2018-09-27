//
// Created by LenkaSava on 19.09.18.
//

#ifndef ARMY_NECROSTATE_H
#define ARMY_NECROSTATE_H

#include <iostream>
#include "../exceptions.h"
#include "State.h"
#include "MagicState.h"

class NecroState : public MagicState {
protected:
    bool isNecromancer = true;

public:
    NecroState(int mana);
    virtual ~NecroState();

    bool getIsNecromancer();


};

#endif //ARMY_NECROSTATE_H
