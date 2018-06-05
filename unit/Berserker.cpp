#include "Berserker.h"

Berserker::Berserker(const char* title, int hitPoints, int damage):
        Unit(title, hitPoints, damage) {
            this->ability = new DefaultAbility(this);
            this->state = new State(title, hitPoints, damage);

}

Berserker::~Berserker() {}
