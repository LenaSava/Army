#ifndef PRIEST_H
#define PRIEST_H

#include "SpellCaster.h"
#include "../spell/Fireball.h"
#include "../spell/Heal.h"
#include "../ability/PriestAbility.h"

class Priest : public SpellCaster {
    public:
        Priest(const char* title, int hitPoints, int damage, int mana);
        virtual ~Priest();
};

#endif // PRIEST_H
