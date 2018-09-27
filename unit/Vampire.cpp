#include "Vampire.h"

Vampire::Vampire(const char* title, int hitPoints, int damage):
        Unit(title, hitPoints, damage) {
            this->ability = new VampireAbility(this);
            this->state = new VampireState(title, hitPoints, damage);
            this->isUndead = true;

}


Vampire::~Vampire() {}

