#ifndef HEALER_H
#define HEALER_H

#include "SpellCaster.h"
#include "../spell/Heal.h"
#include "../spell/FireBall.h"
#include "../ability/HealerAbility.h"

class Healer : public SpellCaster {
public:
    Healer(const char* title, int hitPoints, int damage, int mana);
    virtual ~Healer();
};

#endif // HEALER_H