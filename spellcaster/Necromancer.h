#ifndef ARMY_NECROMANCER_H
#define ARMY_NECROMANCER_H

#include "SpellCaster.h"
#include "../spell/DarkMagic.h"
#include "../ability/NecroAbility.h"
#include "../state/NecroState.h"

class Necromancer : public SpellCaster {
public:
    Necromancer(const char* title, int hitPoints, int damage, int mana);
    virtual ~Necromancer();

    void addObserver();

    virtual void attack(Unit* enemy);
    virtual void cast(Unit* enemy);

    virtual void takeDamage(int dmg);
    virtual void takeMagicDamage(int dmg);
};

#endif //ARMY_NECROMANCER_H
