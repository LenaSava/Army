#ifndef WIZARD_H
#define WIZARD_H

#include "SpellCaster.h"
#include "../spell/FireBall.h"
#include "../spell/Heal.h"
#include "../ability/WizardAbility.h"

class Wizard : public SpellCaster {
    public:
        Wizard(const char* title, int hitPoints, int damage, int mana);
        virtual ~Wizard();
};

#endif // WIZARD_H
