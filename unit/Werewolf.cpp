#include "Werewolf.h"

Werewolf::Werewolf(const char *title, int hitPoints, int damage) :
        Unit(title, hitPoints, damage) {
            this->ability = new WerewolfAbility(this);
            this->state = new WerewolfState(title, hitPoints, damage);
}


Werewolf::~Werewolf(){}