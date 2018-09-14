#ifndef ARMY_NECROMANCER_H
#define ARMY_NECROMANCER_H

#include "SpellCaster.h"
#include "../spell/DarkMagic.h"
#include "../ability/NecroAbility.h"

class Necromancer : public SpellCaster {
public:
    Necromancer(const char* title, int hitPoints, int damage, int mana);
    virtual ~Necromancer();
};

#endif //ARMY_NECROMANCER_H
